#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,sum=0,mul=0,div=0,sub=0,rem=0;
    char op;
    printf("Enter Num1:");
    scanf("%d",&num1);
    printf("\nEnter Num2:");
    scanf("%d",&num2);
    printf("\nEnter Operation:");
    op=getch();
    switch(op){
      case '+':
          sum=num1+num2;
          printf("\nSum is:%d",sum);
          break;
      case '-':
          sub=num1-num2;
          printf("\nSub is:%d",sub);
          break;
      case '*':
          mul=num1*num2;
          printf("\nMul is:%d",mul);
          break;
      case '/':
          div=num1/num2;
          printf("\nDiv is:%d",div);
          break;
      default:
           rem=num1%num2;
           printf("\nReminder is:%d",rem);
           break;


    }
    return 0;
}



