#include<stdio.h>
#include<conio.h>

int main()
{
    int num,val,sum=0;
    do
    {
        printf("\n Enter Number:");
        scanf("%d",&num);
        sum=sum+num;
    }while(num>0);
    printf("\nSum is:%d",sum);
    return 0;
}
