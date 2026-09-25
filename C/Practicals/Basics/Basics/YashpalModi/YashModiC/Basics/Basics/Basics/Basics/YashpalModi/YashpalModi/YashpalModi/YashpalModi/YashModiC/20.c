#include<stdio.h>
#include<conio.h>

int main()
{
    int i=1,sum=0;
    while(i<=10)
    {
        printf("\nValue:%d",i);
        sum=sum+i;
        i++;
    }
    printf("\n Sum Of 1st 10 Natural Num:%d",sum);
    return 0;
}
