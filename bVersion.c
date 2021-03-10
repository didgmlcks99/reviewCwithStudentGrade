#include <stdio.h>

int main(){
    int score[5][3];
    int total[5] = {0,};
    float average[5];

    for(int i=0; i<5; i++){
        printf("%d번 학생 : ", i+1);
        scanf("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);

        total[i]+=(score[i][0] + score[i][1] + score[i][2]);
        average[i] = (float)total[i]/3;
    }

    printf("\n");

    for(int i=0; i<5; i++){
        printf("%d번 학생의 총점은 %d, 평균은 %.1f", i+1, total[i], average[i]);
        if(average[i]>=90.0){
            printf("(등급 A)\n");
        }else if(average[i]<90.0 && average[i]>=80.0){
            printf("(등급 B)\n");
        }else if(average[i]<80.0 && average[i]>=70.0){
            printf("(등급 C)\n");
        }else if(average[i]<70.0 && average[i]>=60.0){
            printf("(등급 D)\n");
        }else if(average[i]<60.0){
            printf("(등급 F)\n");
        }
    }
    return 0;
}