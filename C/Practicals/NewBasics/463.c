#include<stdio.h>
#include<conio.h>

int main()
{
    int num,first,last,middle,sum=0;
    printf("Enter Number:");
    scanf("%d",&num);
    first=num/100;
    last = num - ((num / 10) * 10);
    middle=(num / 10) - (first * 10);
    sum=first + middle + last;
    printf("\nFirst Digit:%d",first);
    printf("\nLast Digit:%d",last);
    printf("\nMiddle Digit:%d",middle);
    printf("\n Sum Of Digits:%d",sum);
    return 0;
}
