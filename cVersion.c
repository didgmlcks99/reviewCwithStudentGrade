#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Student{
    int score[3];
    int total;
    float average;
    char grade[10];
};

void scanScore(struct Student *s, int num){
    printf("%d번 학생 : ", num);
    scanf("%d %d %d", &s->score[0], &s->score[1], &s->score[2]);
}

void insertResult(struct Student *r){
    r->total=0;
    for(int i=0; i<3; i++){
        r->total += r->score[i];
    }

    r->average = (float)r->total/3;
}

void setGrade(struct Student *g){
    if(g->average>=90.0){
        strcpy(g->grade, "(등급 A)");
    }else if(g->average<90.0 && g->average>=80.0){
        strcpy(g->grade, "(등급 B)");
    }else if(g->average<80.0 && g->average>=70.0){
        strcpy(g->grade, "(등급 C)");
    }else if(g->average<70.0 && g->average>=60.0){
        strcpy(g->grade, "(등급 D)");
    }else if(g->average<60.0){
        strcpy(g->grade, "(등급 F)");
    }
}

void printResults(struct Student *p, int num){
    printf("%d번 학생의 총점은 %d, 평균은 %.1f%s\n", num, p->total, p->average, p->grade);
}

int main(){
    struct Student student[5];

    for(int i=0; i<5; i++){
        scanScore(&student[i], i+1);
        insertResult(&student[i]);
        setGrade(&student[i]);
    }
    printf("\n");
    for(int j=0; j<5; j++){
        printResults(&student[j], j+1);
    }

    return 0;
}