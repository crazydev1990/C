#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[5];
    printf("Enter 5 numbers (between 1 to 100):\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nAscending Order: ");
    for (int num = 1; num <= 100; num++)
    {
        for (int i = 0; i < 5; i++)
        {
            if (arr[i] == num)
            {
                printf("\n%d ", arr[i]);
            }
        }
    }
    printf("\nDescending Order: ");
    for (int num = 100; num >= 1; num--)
    {
        for (int i = 0; i < 5; i++)
        {
            if (arr[i] == num)
            {
                printf("\n%d ", arr[i]);
            }
        }
    }
    printf("\n");
    return 0;
}

