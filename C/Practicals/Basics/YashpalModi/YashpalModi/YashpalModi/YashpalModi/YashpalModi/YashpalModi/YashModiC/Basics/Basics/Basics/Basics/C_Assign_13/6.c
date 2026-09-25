#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;
    int a[3][3];
    int trans[3][3];
    printf("\n Enter Matrix 3*3:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Entered Matrix 3*3:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n Lower Triangular Of Matrix 3*3:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i < j)
             printf("0 ");
           else
             printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n Upper Triangular Of Matrix 3*3:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i > j)
             printf("0 ");
           else
             printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

