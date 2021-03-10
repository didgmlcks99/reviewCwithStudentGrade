#include <stdio.h>

int main(){
    int aTotal, aOne, aTwo, aThree;
    float aAverage;

    int bTotal, bOne, bTwo, bThree;
    float bAverage;

    int cTotal, cOne, cTwo, cThree;
    float cAverage;

    int dTotal, dOne, dTwo, dThree;
    float dAverage;
    
    int eTotal, eOne, eTwo, eThree;
    float eAverage;

    printf("1번 학생 : ");
    scanf("%d %d %d", &aOne, &aTwo, &aThree);
    aTotal = aOne + aTwo + aThree;
    aAverage = (float)aTotal/3;

    printf("2번 학생 : ");
    scanf("%d %d %d", &bOne, &bTwo, &bThree);
    bTotal = bOne + bTwo + bThree;
    bAverage = (float)bTotal/3;

    printf("3번 학생 : ");
    scanf("%d %d %d", &cOne, &cTwo, &cThree);
    cTotal = cOne + cTwo + cThree;
    cAverage = (float)cTotal/3;

    printf("4번 학생 : ");
    scanf("%d %d %d", &dOne, &dTwo, &dThree);
    dTotal = dOne + dTwo + dThree;
    dAverage = (float)dTotal/3;

    printf("5번 학생 : ");
    scanf("%d %d %d", &eOne, &eTwo, &eThree);
    eTotal = eOne + eTwo + eThree;
    eAverage = (float)eTotal/3;

    printf("\n1번 학생의 총점은 %d, 평균은 %.1f", aTotal, aAverage);
    if(aAverage>=90.0){
        printf("(등급 A)\n");
    }else if(aAverage<90.0 && aAverage>=80.0){
        printf("(등급 B)\n");
    }else if(aAverage<80.0 && aAverage>=70.0){
        printf("(등급 C)\n");
    }else if(aAverage<70.0 && aAverage>=60.0){
        printf("(등급 D)\n");
    }else if(aAverage<60.0){
        printf("(등급 F)\n");
    }

    printf("2번 학생의 총점은 %d, 평균은 %.1f", bTotal, bAverage);
    if(bAverage>=90.0){
        printf("(등급 A)\n");
    }else if(bAverage<90.0 && bAverage>=80.0){
        printf("(등급 B)\n");
    }else if(bAverage<80.0 && bAverage>=70.0){
        printf("(등급 C)\n");
    }else if(bAverage<70.0 && bAverage>=60.0){
        printf("(등급 D)\n");
    }else if(bAverage<60.0){
        printf("(등급 F)\n");
    }

    printf("3번 학생의 총점은 %d, 평균은 %.1f", cTotal, cAverage);
    if(cAverage>=90.0){
        printf("(등급 A)\n");
    }else if(cAverage<90.0 && cAverage>=80.0){
        printf("(등급 B)\n");
    }else if(cAverage<80.0 && cAverage>=70.0){
        printf("(등급 C)\n");
    }else if(cAverage<70.0 && cAverage>=60.0){
        printf("(등급 D)\n");
    }else if(cAverage<60.0){
        printf("(등급 F)\n");
    }

    printf("4번 학생의 총점은 %d, 평균은 %.1f", dTotal, dAverage);
    if(dAverage>=90.0){
        printf("(등급 A)\n");
    }else if(dAverage<90.0 && dAverage>=80.0){
        printf("(등급 B)\n");
    }else if(dAverage<80.0 && dAverage>=70.0){
        printf("(등급 C)\n");
    }else if(dAverage<70.0 && dAverage>=60.0){
        printf("(등급 D)\n");
    }else if(dAverage<60.0){
        printf("(등급 F)\n");
    }

    printf("5번 학생의 총점은 %d, 평균은 %.1f", eTotal, eAverage);
    if(eAverage>=90.0){
        printf("(등급 A)\n");
    }else if(eAverage<90.0 && eAverage>=80.0){
        printf("(등급 B)\n");
    }else if(eAverage<80.0 && eAverage>=70.0){
        printf("(등급 C)\n");
    }else if(eAverage<70.0 && eAverage>=60.0){
        printf("(등급 D)\n");
    }else if(eAverage<60.0){
        printf("(등급 F)\n");
    }
    return 0;
}