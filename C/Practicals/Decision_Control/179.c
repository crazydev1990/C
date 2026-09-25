#include<stdio.h>
#include<conio.h>

int main()
{
    int choice;
    printf("\n 1.Print Account Mini Statement\n");
    printf("\n 2.Print Account Balance\n");
    printf("\n Enter Choice:");
    scanf("%d",&choice);
    switch(choice)
    {
       case 1:
                printf("\n Account Mini Statement is Ready\n");
                break;
       case 2:
               printf("\n Account Balance is Ready\n");
               break;
       default:
               printf("\n Go Back To Main Menu \n");
    }
    return 0;
}
