#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,result=0;
    char ch;
    printf("Enter Operation:");
    scanf("%c",&ch);
    printf("Enter Num1:");
    scanf("%d",&num1);
    printf("Enter Num2:");
    scanf("%d",&num2);

    switch(ch)
    {
       case '+':
           result=num1 + num2;
           break;
       case '-':
           result=num1 - num2;
           break;
       case '*':
           result=num1 * num2;
           break;
       case '/':
           result = num1 / num2;
           break;
       default:
            printf("\nInvalid Choice");
    }
    printf("\n Your Number1 is:%d",num1);
    printf("\n Your Number2 is:%d",num2);
    printf("\n Your Result is:%d",result);
    return 0;
}
