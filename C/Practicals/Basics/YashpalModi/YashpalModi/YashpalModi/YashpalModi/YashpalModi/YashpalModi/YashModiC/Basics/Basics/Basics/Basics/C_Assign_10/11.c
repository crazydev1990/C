#include<stdio.h>
#include<conio.h>

int main()
{
    int num,flag=0;
    printf("\n Enter Number:");
    scanf("%d",&num);
    if(num%2==0)
        flag=1;
    else
        flag=0;
    switch(flag)
    {
       case 1:
               printf("\n %d is Even Number",num);
               num=num+1;
               printf("\n Nearest Upper Odd Number is:%d",num);
               break;
       case 0:
              printf("\n %d is not Even Number");
              break;
       default:
               printf("\n Invalid ");

    }
    return 0;
}
