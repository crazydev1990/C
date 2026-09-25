#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=(5-i))
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }
        for(j=4;j>=1;j--)
        {
            if(j==4)
                continue;
            if(j<=(5-i))
            {
                printf("%d",j);
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
