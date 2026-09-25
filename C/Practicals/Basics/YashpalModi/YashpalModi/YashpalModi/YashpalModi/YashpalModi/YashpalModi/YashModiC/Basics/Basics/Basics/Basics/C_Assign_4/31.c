#include<stdio.h>
#include<conio.h>

int main()
{
    int count=0,num;
    printf("\n Enter Number:");
    scanf("%d",&num);
    while(num>0){
        num=num/10;
        count=count+1;
    }
    printf("\nTotal Digits:%d",count);
    return 0;
}
