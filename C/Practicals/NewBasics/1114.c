#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    int lastDigit,withoutLast,lastZero;
    printf("Enter Number:");
    scanf("%d",&num);
    lastDigit=num%10;
    withoutLast=num/10;
    lastZero=(num/10)*10;
    printf("\nUnit Digit:%d",lastDigit);
    printf("\nNumber Without Last Digit:%d",withoutLast);
    printf("\nNumber With Last Digit Zero:%d",lastZero);
    return 0;
}
