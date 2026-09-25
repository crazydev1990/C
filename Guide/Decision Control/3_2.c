
#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("\n Enter Number:");
    scanf("%d",&num);
    if(num%5==0)
        printf("%d is divisible by 5",num);
    else
        printf("%d is not divisible by 5",num);
    getch();
}
