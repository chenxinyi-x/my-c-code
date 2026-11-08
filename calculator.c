#include<stdio.h>
int main()
{
    double num1,num2;
    char op;
    printf("请输入算式(例如10+5):\n");
    scanf("%lf %c %lf", &num1, &op, &num2);
    if(op=='+'){
        printf("结果是：%.2f\n",num1+num2);
    }else if(op=='-'){
        printf("结果是：%.2f\n",num1-num2);
    }else if(op=='*'){
        printf("结果是：%.2f\n",num1*num2);
    }else if(op=='/'){
        if(num2==0){
            printf("除数不能为零\n");
        }else  printf("结果是：%.2f\n",num1/num2);
    }else  printf("输入格式错误\n");
    return 0;
}