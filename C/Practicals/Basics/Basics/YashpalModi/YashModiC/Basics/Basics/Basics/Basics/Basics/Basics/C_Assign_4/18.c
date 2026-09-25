#include<stdio.h>
#include<conio.h>

int main()
{
    int year;
    printf("Enter Year:");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) || year%400==0)
    {
        printf("\n %d is Leap Year",year);
    }
    else
    {
      printf("\n %d is not Leap Year",year);
    }
    return 0;
}
