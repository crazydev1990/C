#include<stdio.h>
#include<conio.h>

int main()
{
    int choice;
    printf("\n Enter Choice (1-5):");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
             printf("\n Gujarati");
             break;
      case 2:
             printf("\n Hindi");
             break;
      case 3:
             printf("\n English");
             break;
      case 4:
             printf("\n Bangla");
             break;
      case 5:
             printf("\n Sanskrit");
             break;
      default:
            printf("\n Urdu");
    }
    return 0;
}
