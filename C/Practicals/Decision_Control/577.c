#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int num1,num2;
    int sum=0,sub=0,mul=0,div=0;
    char ch;
    printf("\n Enter 2 Numeric Values:");
    scanf("%d %d",&num1,&num2);
    printf("\n Choose Operator (+,-,*,/):");
    ch=getch();
    switch(ch)
    {
        case '+':
                  sum=num1+num2;
                  printf("\n Addition Of %d & %d is %d",num1,num2,sum);
                  break;
        case '-':
                  sub=num1-num2;
                  printf("\n Subtraction Of %d & %d is %d",num1,num2,sub);
                  break;
        case '*':
                 mul=num1 * num2;
                 printf("\n Multiplication Of %d & %d is %d",num1,num2,mul);
                 break;
        case '/':
                 div=num1 / num2;
                 printf("\n Division Of %d & %d is %d",num1,num2,div);
                 break;
        default:
            printf("\n Invalid ");
            exit(0);
    }
    return 0;
}
