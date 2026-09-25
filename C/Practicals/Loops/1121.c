#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i,j,k,n=4;
    for(i=0;i<n;i++)
    {
        for(k = i; k < n - 1; k++)
        {
            printf(" ");
        }
        for(j=-i;j<=i;j++)
        {
            printf("%d",abs(j));
        }
        printf("\n");
    }
    return 0;
}
