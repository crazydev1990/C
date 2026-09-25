#include<stdio.h>
#include<conio.h>
int f1(int);

int main()
{
    int k,n;
    printf("\n 1 To N:");
    scanf("%d",&n);
    k=f1(n);
    printf("\n Factorial of 1st n nos is :%d",k);
    return 0;
}
int f1(int n)
{
    int s;
    if(n==1)
        return 1;
    s=n*f1(n-1);
    return s;
}

