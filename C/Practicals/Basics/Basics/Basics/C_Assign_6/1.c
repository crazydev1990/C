#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n;
    printf("\n Enter N:");
    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        printf("\ni=%d",i);
        for(j = 1; j <= i; j++)
        {
            printf("\nj=%d ",j);
        }
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
