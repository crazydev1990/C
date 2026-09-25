#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[3][3];
    int is_symmetric = 1;
    printf("Enter 9 numbers for 3x3 Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                is_symmetric = 0;
                break;
            }
        }
    }
    if (is_symmetric == 1)
    {
        printf("\nThe Matrix is Symmetric!\n");
    }
    else
    {
        printf("\nThe Matrix is NOT Symmetric!\n");
    }
    return 0;
}
