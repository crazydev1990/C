#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k,n=5,s;
    for(i=1;i<=n;++i)
    {
        if(i==1 || i==n)
        {
            for(j=1;j<=n;++j)
            {
                printf("*");
            }
        }
        else
        {
            printf("*");
            for(s=1;s<=n-2;++s)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

}
