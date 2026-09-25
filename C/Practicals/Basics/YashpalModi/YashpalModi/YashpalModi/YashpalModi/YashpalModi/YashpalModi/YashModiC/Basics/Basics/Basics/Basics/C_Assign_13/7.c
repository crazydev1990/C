#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3],i,j;
    int cnt_r1=0,cnt_r2=0,cnt_r3=0;
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
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0 && a[i][j]==1)
                cnt_r1=cnt_r1+1;
            else if(i==1 && a[i][j]==1)
                cnt_r2=cnt_r2+1;
            else if(i==2 && a[i][j]==1)
                cnt_r3=cnt_r3+1;
        }
    }
    printf("\n Row counts: %d %d %d",cnt_r1,cnt_r2,cnt_r3);
    if(cnt_r1 >= cnt_r2 && cnt_r1 >= cnt_r3)
        printf("\n Row1 Has Max Number Of 1:%d",cnt_r1);
    else if(cnt_r2 >= cnt_r1 && cnt_r2 >= cnt_r3)
        printf("\n Row2 Has Max Number Of 1:%d",cnt_r2);
    else
        printf("\n Row3 Has Max Number Of 1:%d",cnt_r3);
    return 0;
}
