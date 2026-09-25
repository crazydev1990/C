#include<stdio.h>
#include<conio.h>

int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);

int main()
{
    int a,b,result_add=0,result_sub=0,result_mul=1,result_div=1;
    printf("\n Enter 2 Values:");
    scanf("%d %d",&a,&b);
    printf("\n Addition:\n");
    result_add=add(a,b);
    printf("\n Addition Of 2 Nos is:%d",result_add);
    printf("\n Subtraction:\n");
    result_sub=sub(a,b);
    printf("\n Subtraction Of 2 Nos is:%d",result_sub);
    printf("\n Multiplication:\n");
    result_mul=mul(a,b);
    printf("\n Multiplication Of 2 Nos is:%d",result_mul);
    printf("\n Division:\n");
    result_div=div(a,b);
    printf("\n Division Of 2 Nos is:%d",result_div);
    return 0;
}
int add(int x,int y)
{
    int z=x+y;
    return z;
}
int sub(int x,int y)
{
    int z;
    if(x>y)
      z=x-y;
    else
      z=y-x;
    return z;
}
int mul(int x,int y)
{
    int z;
    z=x*y;
    return z;
}
int div(int x,int y)
{
    int z;
    if(x>y)
      z=x/y;
    else
      z=y/x;
    return z;
}
