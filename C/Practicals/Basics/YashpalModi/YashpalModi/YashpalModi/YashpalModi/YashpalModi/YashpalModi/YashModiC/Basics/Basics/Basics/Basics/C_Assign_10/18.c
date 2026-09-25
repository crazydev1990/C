#include<stdio.h>
#include<conio.h>
void getFirstOdd(int);
int main()
{
    int num;
    printf("\n Enter Number:");
    scanf("%d",&num);
    getFirstOdd(num);
    return 0;
}
void getFirstOdd(int num)
{
    int x;
    int limit=num;
    for(int i=1;i<=limit;i++)
    {
        printf("%d is %d Odd",2*i-1,i);
        printf("\n");
    }
}
