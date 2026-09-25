#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k,n;
    printf("\n Enter N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\ni=%d",i);
        for(j=1;j<=n;j++)
        {
            printf("\nj=%d ",j);
        }
        for(j=1;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
