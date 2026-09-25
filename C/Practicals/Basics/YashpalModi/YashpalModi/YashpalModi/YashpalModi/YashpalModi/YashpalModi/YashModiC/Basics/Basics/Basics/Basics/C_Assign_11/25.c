#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[3][3];
    printf("Enter 9 numbers:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nMatrix after swapping rows:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0)
            {
                printf("%d ", arr[1][j]);
            }
            else if (i == 1)
            {
                printf("%d ", arr[0][j]);
            }
            else
            {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}

