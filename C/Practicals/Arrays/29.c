#include<stdio.h>
#include<conio.h>

int main()
{
    int a[3][3];
    int b[3][3],i,j;
    int res[3][3];
    printf("\n First 3*3 Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Second 3*3 Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n Sum Of 3*3 Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            res[i][j]=a[i][j]+b[i][j];
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    printf("\n Product Of 3*3 Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            res[i][j]=a[i][j]*b[i][j];
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
