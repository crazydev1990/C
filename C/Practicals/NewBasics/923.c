#include<stdio.h>
#include<conio.h>
void add();

int main()
{
    add();
    return 0;
}
void add()
{
    int a,b,c;
    printf("\n Enter 2 Operands Values:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("\n TNRN:%d",c);
}
