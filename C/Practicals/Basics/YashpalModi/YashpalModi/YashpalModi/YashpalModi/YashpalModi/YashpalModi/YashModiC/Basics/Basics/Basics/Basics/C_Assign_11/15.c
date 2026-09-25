#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[3][3];
    int count = 0;
    printf("Enter 9 numbers for matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nResult Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > 0)
            {
                printf("%d ", arr[i][j]);
                count = count + 1;
                if (count == 3)
                {
                    printf("\n");
                    count = 0;
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] <= 0)
            {
                printf("%d ", arr[i][j]);
                count = count + 1;
                if (count == 3)
                {
                    printf("\n");
                    count = 0;
                }
            }
        }
    }
    printf("\n");
    return 0;
}

