#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                if(j<=3)
                    printf("%d ", j-(5-i)+1);
                else
                    printf("%d ", (3+i)-j+1);
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
