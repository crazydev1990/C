#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[9];
    int count = 0;
    printf("Enter 9 numbers:\n");
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe 3x3 Matrix is:\n");
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
        count = count + 1;
        if (count == 3)
        {
            printf("\n");
            count = 0;
        }
    }
    return 0;
}

