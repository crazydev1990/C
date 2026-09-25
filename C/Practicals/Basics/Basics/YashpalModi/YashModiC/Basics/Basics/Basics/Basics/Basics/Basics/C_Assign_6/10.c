#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k,n;
    printf("\nEnter N:");
    scanf("%d",&n);
    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= 12; j++)
        {
            if(i == 1 || i == 4 || j == 1 || j == 12)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }
    return 0;
}
