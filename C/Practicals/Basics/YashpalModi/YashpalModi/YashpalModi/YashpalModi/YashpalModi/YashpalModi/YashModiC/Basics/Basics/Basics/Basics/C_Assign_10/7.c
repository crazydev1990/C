#include <stdio.h>
#include<conio.h>

int main()
{
    int day;
    printf("Enter day number of the week (1 for Monday to 7 for Sunday): ");
    scanf("%d", &day);
    switch (day)
    {
        case 1:
            printf("Happy Monday!\n");
            break;
        case 2:
            printf("Happy Tuesday!\n");
            break;
        case 3:
            printf("Happy Wednesday!\n");
            break;
        case 4:
            printf("Happy Thursday!\n");
            break;
        case 5:
            printf("Happy Friday!\n");
            break;
        case 6:
            printf("Happy Saturday!\n");
            break;
        case 7:
            printf("Happy Sunday!\n");
            break;
        default:
            printf("Invalid day number! Please enter a number between 1 and 7.\n");
            break;
    }
    return 0;
}

