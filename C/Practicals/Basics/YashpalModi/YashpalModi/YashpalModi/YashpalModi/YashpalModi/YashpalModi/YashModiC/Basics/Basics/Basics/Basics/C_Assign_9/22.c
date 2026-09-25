#include<stdio.h>
#include<conio.h>
void add();

int main()
{
    int a,b,c;
    printf("\n Enter 2 Operands Values:");
    scanf("%d %d",&a,&b);
    add(a,b);//call by value
    return 0;
}
void add(int x,int y)
{
    int z;
    z=x+y;
    printf("\nTSRN:%d",z);
}
