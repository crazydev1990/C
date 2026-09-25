#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n;
    printf("\n Enter N:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
       for(j=1;j<=n;j++)
       {
          if(j<=n)
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

