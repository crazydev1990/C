#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int arr[9];
    int choice;
    int count = 0;
    printf("Enter 9 numbers for 3x3 Matrix (between 1 to 100):\n");
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n--- MATRIX SORT MENU ---");
    printf("\n1. Sort Matrix in Ascending Order");
    printf("\n2. Sort Matrix in Descending Order");
    printf("\n3. Exit");
    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);
    printf("\nResult Matrix:\n");
    count = 0;

    switch(choice)
    {
        case 1:
            for (int num = 1; num <= 100; num++)
            {
                for (int i = 0; i < 9; i++)
                {
                    if (arr[i] == num)
                    {
                        printf("%d ", arr[i]);
                        count = count + 1;
                        if (count == 3)
                        {
                            printf("\n");
                            count = 0;
                        }
                    }
                }
            }
            break;
        case 2:
            for (int num = 100; num >= 1; num--)
            {
                for (int i = 0; i < 9; i++)
                {
                    if (arr[i] == num)
                    {
                        printf("%d ", arr[i]);
                        count = count + 1;
                        if (count == 3)
                        {
                            printf("\n");
                            count = 0;
                        }
                    }
                }
            }
            break;
        case 3:
            exit(0);
        default:
            printf("\nInvalid Choice Selection!\n");
    }
    return 0;
}

