#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int arr1[3][3], arr2[3][3], arr3[3][3];
    printf("Enter 9 numbers for First Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\nEnter 9 numbers for Second Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = abs(arr1[i][j] + arr2[i][j]);
        }
    }
    printf("\nResult Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}

