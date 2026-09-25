#include<stdio.h>
#include<conio.h>
void swap(int,int);
int main()
{
    int num1,num2;
    printf("\n Enter Num1:");
    scanf("%d",&num1);
    printf("\n Enter Num2:");
    scanf("%d",&num2);
    printf("\n Before Swap Num1 is:%d",num1);
    printf("\n Before Swap Num2 is:%d",num2);
    swap(num1,num2);
    return 0;
}
void swap(int x,int y)
{
    int z=x;
    x=(x*y)/x;
    y=(z*y)/y;
    printf("\n After Swap Num1 is:%d",x);
    printf("\n After Swap Num2 is:%d",y);
}
