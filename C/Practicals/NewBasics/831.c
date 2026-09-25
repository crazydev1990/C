#include<stdio.h>
#include<conio.h>

int main()
{
    int num,lastDigit,rotatedNum,exceptLast;
    printf("Enter Number:");
    scanf("%d",&num);
    lastDigit=num%10;
    exceptLast=num/10;
    rotatedNum=(lastDigit*100) + exceptLast;
    printf("\n Rotated Number :%d",rotatedNum);
    return 0;
}
