#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,x;
    printf("\n Enter N");
    scanf("%d",&n);
    printf("\n Enter X:");
    scanf("%d",&x);
    for(i=0;i<=n;i++)
    {
        printf("1/%d ",x);
        x=x*10+9;
    }
    return 0;
}
