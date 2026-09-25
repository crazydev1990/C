
#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("\n Enter Number:");
    scanf("%d",&num);
    if((num/2)*2==num)
        printf("%d is Even number",num);
    else
        printf("%d is Odd number",num);
    getch();
}


