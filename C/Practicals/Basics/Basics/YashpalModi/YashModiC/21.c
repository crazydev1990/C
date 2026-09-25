#include<stdio.h>
#include<conio.h>

int main()
{
    int num,i=1,sum=0;
    printf("\n How Many Numbers?:");
    scanf("%d",&num);
    while(i<=num)
    {
        printf("\n%d",i);
        sum=sum+i;
        i++;
    }
    printf("\n Sum Of First n Natural Num is: %d",sum);
    return 0;
}
