#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k,n;
    printf("\n Enter N:");
    scanf("%d",&n);
    // Upper part
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
            printf("*");

        for(j = 1; j <= 2 * (n - i); j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    // Lower part
    for(i = n - 1; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
            printf("*");

        for(j = 1; j <= 2 * (n - i); j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }
    return 0;
}
