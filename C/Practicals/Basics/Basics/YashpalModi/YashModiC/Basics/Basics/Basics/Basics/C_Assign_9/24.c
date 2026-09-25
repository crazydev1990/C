#include<stdio.h>
#include<conio.h>
int add(int,int);

int main()
{
    int s,a,b;
    printf("\n Enter Values:");
    scanf("%d %d",&a,&b);
    s=add(a,b);
    printf("\n TSRS:%d",s);
    return 0;
}
int add(int x,int y)
{
    int z=x+y;
    return z;
}
