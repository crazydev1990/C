#include<stdio.h>
#include<conio.h>
#include <stdbool.h>

bool checkEvenOdd(int);

int main()
{
    int num;
    bool flag;
    printf("\n Enter Number:");
    scanf("%d",&num);
    flag=checkEvenOdd(num);
    printf("\n Flag:%d",flag);
    return 0;
}
bool checkEvenOdd(int digit)
{
    bool flag;
    if(digit % 2 == 0)
    {
        flag=1;
        printf("\n%d is Even",digit);
    }
    else
    {
        flag=0;
        printf("\n%d is Odd",digit);
    }
    return flag;
}
