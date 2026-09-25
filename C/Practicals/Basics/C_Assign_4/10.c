#include<stdio.h>
#include<conio.h>

int main()
{
    int num,fact=1,i;
    printf("\nEnter Number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("Factorial Of Number %d is %d",num,fact);
    return 0;
}
