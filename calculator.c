#include<stdio.h>

typedef struct{
    double num1;
    double num2;
    char op;
}CalcInput;

void calculate(CalcInput* input){
    switch(input->op){
        case '+':
            printf("=%.2f\n",input->num1+input->num2);
        break;
        case '-':
            printf("=%.2f\n",input->num1+input->num2);
        break;
        case '*':
            printf("=%.2f\n",input->num1*input->num2);
            break;
        case '/':
            if(input->num2==0){
                printf("错误:除数不能为0\n");
            }else{
                printf("=%.2f\n",input->num1/input->num2);
            }
            break;
        default:
            printf("错误:不支持的运算符\n");
            break;
    }
}

int main(){
    CalcInput my_input;
    printf("===明令行计算器启动===");
    printf("格式：数字 运算符 数字(例如3.5+2)\n");
    printf("输入q退出程序\n");

    while(1){
        printf(">");
        if(scanf("%lf%c%lf",&my_input.num1,&my_input.op,&my_input.num2)!=3){
            break;
        }
        calculate(&my_input);
    }

    printf("程序已退出。\n");
    return 0;
}

