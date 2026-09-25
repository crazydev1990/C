#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,r_sum=0,c_sum=0;
    int a[3][3];
    printf("\n Enter 3*3 Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Entered 3*3 Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n Sum Of Rows Of 3*3 Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
              r_sum=r_sum+a[i][j];
        }
    }
    printf("\n %d",r_sum);
    printf("\n Sum Of Columns Of 3*3 Matrix:\n");
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
              c_sum=c_sum+a[i][j];
        }
    }
    printf("\n %d",c_sum);
    return 0;
}

