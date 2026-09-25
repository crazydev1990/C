#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,num3;
    printf("\n Enter 1st Number:");
    scanf("%d",&num1);
    printf("\n Enter 2nd Number:");
    scanf("%d",&num2);
    printf("\n Enter 3rd Number:");
    scanf("%d",&num3);
    if(num1 > num2)
    {
        if(num1 > num3)
        {
            printf("%d is bigger",num1);
        }
        else
        {
            printf("%d is bigger",num3);
        }
    }
    else
    {
        if(num3 < num2)
        {
            printf("%d is bigger",num2);
        }
        else
        {
            printf("%d is bigger",num3);
        }
    }
    return 0;
}
