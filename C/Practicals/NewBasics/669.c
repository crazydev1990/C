#include<stdio.h>
#include<conio.h>

int main()
{
    int num,digit,temp;
    printf("Enter Number:");
    scanf("%d",&num);
    printf("\nEnter Number To Append:");
    scanf("%d",&digit);
    temp=num;
    temp=(temp*10)+digit;
    printf("\nBefore Append New Digit:%d",num);
    printf("\nAfter Append New Digit:%d",temp);
    return 0;
}
