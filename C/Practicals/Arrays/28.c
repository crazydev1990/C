#include <stdio.h>
#include <conio.h>

void calculate_row_sum(int arr[3][3])
{
    int sum;
    printf("\n--- ROW SUM ---\n");
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("Sum of Row %d is: %d\n", i, sum);
    }
}

void calculate_col_sum(int arr[3][3])
{
    int sum;
    printf("\n--- COLUMN SUM ---\n");
    for (int j = 0; j < 3; j++)
    {
        sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum = sum + arr[i][j];
        }
        printf("Sum of Column %d is: %d\n", j, sum);
    }
}

int main()
{
    int arr[3][3];
    printf("Enter 9 numbers for 3x3 Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    calculate_row_sum(arr);
    calculate_col_sum(arr);
    return 0;
}
