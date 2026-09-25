#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n=5;

    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n;j++)
       {
              if(j<=i)
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
    for(i=1;i<=n;i++)
    {
       if(i == 1)
         continue;
       for(j=1;j<=n;j++)
       {
              if(j<=6-i)
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





