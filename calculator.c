#include<stdio.h>
 struct Equation
    {
        double num1;
        double num2;
        char op;
    };
int main()
{
    struct Equation eq;
    while(1)
    {
        printf("请输入算式(例如10+5,输入q则退出):\n");
        if(scanf("%lf %c %lf", &eq.num1, &eq.op, &eq.num2)!=3){
        printf("已退出计算器。\n");
        break;
    }
    if(eq.op=='+'){
        printf("结果是：%g\n",eq.num1+eq.num2);
    }else if(eq.op=='-'){
        printf("结果是：%g\n",eq.num1-eq.num2);
    }else if(eq.op=='*'){
        printf("结果是：%g\n",eq.num1*eq.num2);
    }else if(eq.op=='/'){
        if(eq.num2==0){
            printf("除数不能为零\n");
        }else  printf("结果是：%g\n",eq.num1/eq.num2);
    }else  printf("输入格式错误\n");
    }
    return 0;   
}