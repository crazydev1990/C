#include<stdio.h>
#include<conio.h>

int main()
{
    int a[3][3],i,j,cnt=0;
    int is_symmetric=1;
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
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j] != a[j][i])
            {
                is_symmetric=0;
            }
            if(a[i][j] == 0)
            {
                cnt=cnt+1;
            }
        }
    }
    if(is_symmetric == 1)
        printf("\n Is Symmetric Matrix");
    else
        printf("\n Is Not Symmetric Matrix");
    if(cnt > 4)
        printf("\n Is Sparse Matrix");
    else
        printf("\n Is Not Sparse Matrix");
    getch();
    return 0;
}
