#include<stdio.h>
int main()
{
    int score;
    printf("请输入你的分数：");
    scanf("%d",&score);
    if(score>=90){
        printf("优秀\n");
    }else if(score>=80){
        printf("良好\n");
    }else if(score>=60){
        printf("及格\n");
    }else{
        printf("挂科\n");
    }
    return 0;
}