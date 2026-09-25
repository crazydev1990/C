#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n,k;
    printf("\n Enter N:");
    scanf("%d",&n);
    for(i=n;i>=1;--i)
    {
        printf("\n i=%d",i);
        for(k=1;k<=n-i;++k)
        {
            printf("\nk=%d ",k);
        }
        for(j=1;j<=i;++j)
        {
           printf("\nj=%d ",j);
        }

        for(k=1;k<=n-i;++k)
        {
            printf(" ");
        }
        for(j=1;j<=i;++j)
        {
           printf("* ");
        }

        printf("\n");
    }
    return 0;
}


