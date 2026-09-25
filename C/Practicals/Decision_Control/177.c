#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

int main()
{
    int num1,num2;
    char ch;
    bool flag;
    printf("\n Enter Num1:");
    scanf("%d",&num1);
    printf("\n Enter Num2:");
    scanf("%d",&num2);
    printf("\n Enter Char:");
    ch=getch();
    switch(ch)
    {
        case '>':
            flag= (num1 > num2) ? true : false;
            if(flag==1)
              printf("\n Num1 is Bigger");
            else
              printf("\n Condition is false here");
            break;
        case '<':
            flag= (num1 < num2) ? true : false;
            if(flag==1)
              printf("\n Num1 is Smaller");
            else
              printf("\n Condition is false here");
            break;
        case '==':
            flag= (num1 == num2) ? true : false;
            if(flag==1)
              printf("\n Num1 is Equal To Num2");
            else
              printf("\n Condition is false here");
            break;
        case '!=':
            flag= (num1 != num2) ? true : false;
            if(flag==1)
              printf("\n Num1 is not Equal To Num2");
            else
              printf("\n Condition is false here");
            break;
        default:
            printf("\nInvalid Choice");
    }
    return 0;
}
