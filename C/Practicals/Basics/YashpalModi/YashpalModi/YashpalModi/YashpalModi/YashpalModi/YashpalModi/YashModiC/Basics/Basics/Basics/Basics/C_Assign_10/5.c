#include <stdio.h>
#include<conio.h>
int main()
{
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d",&month);

    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("I have 31 days\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("I have 30 days\n");
            break;
        case 2:
            printf("I have 28 or 29 days\n");
            break;
        default:
            printf("Invalid month! Please enter a number between 1 and 12.\n");
            break;
    }
    return 0;
}

