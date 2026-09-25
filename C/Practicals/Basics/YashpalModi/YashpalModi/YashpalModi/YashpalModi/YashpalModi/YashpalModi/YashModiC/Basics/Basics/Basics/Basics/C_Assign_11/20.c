#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int arr[3][3];
    int choice;
    int count = 0;
    printf("Enter 9 numbers for matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n--- MENU ---");
    printf("\n1. Push Even numbers to Bottom");
    printf("\n2. Push Odd numbers to Bottom");
    printf("\n3. Push Prime numbers to Bottom");
    printf("\n4. Exit");
    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);
    printf("\nResult Matrix:\n");
    count = 0;

    switch(choice)
    {
        case 1:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (arr[i][j] % 2 != 0)
                    {
                        printf("%d ", arr[i][j]);
                        count = count + 1;
                        if (count == 3) { printf("\n"); count = 0; }
                    }
                }
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (arr[i][j] % 2 == 0)
                    {
                        printf("%d ", arr[i][j]);
                        count = count + 1;
                        if (count == 3) { printf("\n"); count = 0; }
                    }
                }
            }
            break;
        case 2:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (arr[i][j] % 2 == 0)
                    {
                        printf("%d ", arr[i][j]);
                        count = count + 1;
                        if (count == 3) { printf("\n"); count = 0; }
                    }
                }
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (arr[i][j] % 2 != 0)
                    {
                        printf("%d ", arr[i][j]);
                        count = count + 1;
                        if (count == 3) { printf("\n"); count = 0; }
                    }
                }
            }
            break;
        case 3:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    int num = arr[i][j];
                    if (num != 2 && num != 3 && num != 5 && num != 7)
                    {
                        printf("%d ", arr[i][j]);
                        count = count + 1;
                        if (count == 3) { printf("\n"); count = 0; }
                    }
                }
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    int num = arr[i][j];
                    if (num == 2 || num == 3 || num == 5 || num == 7)
                    {
                        printf("%d ", arr[i][j]);
                        count = count + 1;
                        if (count == 3) { printf("\n"); count = 0; }
                    }
                }
            }
            break;

        case 4:
            exit(0);

        default:
            printf("\nInvalid Choice!\n");
    }
    printf("\n");
    return 0;
}

