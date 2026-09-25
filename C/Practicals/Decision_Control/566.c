#include<stdio.h>
#include<conio.h>

int main()
{
    int year;
    printf("\n Enter Year:");
    scanf("%d",&year);
    switch((year%4 == 0 && year%100 !=0) || (year%400 == 0))
    {
       case 1:
               printf("%d is Leap Year",year);
               break;
       case 0:
               printf("%d is not Leap Year",year);
               break;
       default:
               printf("\n Invalid");

    }
    return 0;
}
