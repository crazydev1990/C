#include<stdio.h>
#include<conio.h>

int main()
{
    int number,flag=0,converted;
    printf("\n Enter Number:");
    scanf("%d",&number);
    if(number > 0)
    {
        flag=1;
    }
    else if(number < 0)
    {
        flag=2;
    }
    else
    {
       flag=0;
    }
    switch(flag)
    {
      case 0:
              printf("\n %d is Zero",number);
              break;
      case 1:
              printf("\n %d is Positive Number",number);
              converted=number * -1;
              printf("\n %d is Negative Number Now",converted);
              break;
      case 2:
              printf("\n %d is Negative Number",number);
              converted=number * -1;
              printf("\n %d is Positive Number Now",converted);
              break;
      default:
              printf("\n Invalid");
    }
    return 0;
}
