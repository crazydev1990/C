#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,sum=0;
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
    printf("\n Sum Of Right Diagonals Of 3*3 Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
              sum=sum+a[i][j];
        }
    }
    printf("\n %d",sum);
    return 0;
}
