#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n=5;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
