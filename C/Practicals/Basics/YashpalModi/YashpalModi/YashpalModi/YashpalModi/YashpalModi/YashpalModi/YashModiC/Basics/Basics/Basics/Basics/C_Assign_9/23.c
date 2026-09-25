#include<stdio.h>
#include<conio.h>
int add();
int main()
{
    int s;
    s=add();
    printf("\n TNRS:%d",s);
    return 0;
}
int add()
{
    int a,b,c;
    printf("\n Enter 1st Value:");
    scanf("%d",&a);
    printf("\n Enter 2nd Value:");
    scanf("%d",&b);
    c=a+b;
    return c;
}
