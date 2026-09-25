#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i;
    printf("\n=======================\n");
    printf("\n Enter N:");
    scanf("%d",&n);
    printf("\n=======================\n");
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            continue;
        printf("\n Odd Value is:%d",i);
    }
    printf("\n=======================\n");
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
            continue;
        printf("\n Even Value is:%d",i);
    }
    printf("\n=======================\n");
    return 0;
}
