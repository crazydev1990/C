#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k,n;
    printf("\n Enter N:");
    scanf("%d",&n);
    for(i=0;i<=n;++i)
    {
        printf("\ni=%d",i);
        for(k=0;k<=n-i;++k)
        {
            printf("\nk=%d ",k);
        }
        for(j = 1; j <= i; j++)
        {
            printf("\nj=%d ",j);
        }
        for(k=0;k<=n-i;++k)
        {
            printf("  ");
        }
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
