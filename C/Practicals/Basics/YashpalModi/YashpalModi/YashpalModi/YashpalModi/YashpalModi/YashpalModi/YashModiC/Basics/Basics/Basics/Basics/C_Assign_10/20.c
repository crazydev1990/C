#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

int checkDigitExist(int,int);

int main()
{
    int num,digit,temp;
    bool isFound;
    printf("\n Enter Number:");
    scanf("%d",&num);
    printf("\n Enter Digit:");
    scanf("%d",&digit);
    temp=num;
    isFound=checkDigitExist(num,digit);
    //printf("%d ",isFound);
    if(isFound==1)
    {
        printf("\n %d digit found in nos %d",digit,num);
    }
    else
    {
        printf("\n %d digit not found in nos %d",digit,num);
    }
    return 0;
}
int checkDigitExist(int num,int digit)
{
    int flag=0,lastDigit;
    if(num==0)
    {
        if(digit==0)
           flag=1;
        else
           flag=0;
    }
    else if(num != 0 && num != -num)
    {
        while(num >0)
        {
            lastDigit=num%10;
            if(lastDigit==digit)
            {
                flag=1;
            }
            num=num/10;
        }
    }
    else
    {
        num=num*-1;
    }
    return flag;
}
