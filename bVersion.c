#include <stdio.h>

int main(){
    int score[5][3];
    int total[5] = {0,};
    float average[5];

    for(int i=0; i<5; i++){
        printf("%d�� �л� : ", i+1);
        scanf("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);

        total[i]+=(score[i][0] + score[i][1] + score[i][2]);
        average[i] = (float)total[i]/3;
    }

    printf("\n");

    for(int i=0; i<5; i++){
        printf("%d�� �л��� ������ %d, ����� %.1f", i+1, total[i], average[i]);
        if(average[i]>=90.0){
            printf("(��� A)\n");
        }else if(average[i]<90.0 && average[i]>=80.0){
            printf("(��� B)\n");
        }else if(average[i]<80.0 && average[i]>=70.0){
            printf("(��� C)\n");
        }else if(average[i]<70.0 && average[i]>=60.0){
            printf("(��� D)\n");
        }else if(average[i]<60.0){
            printf("(��� F)\n");
        }
    }
    return 0;
}