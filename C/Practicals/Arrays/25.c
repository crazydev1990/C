#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[5];
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > 0)
        {
            positive_count = positive_count + 1;
        }
        else if (arr[i] < 0)
        {
            negative_count = negative_count + 1;
        }
        else
        {
            zero_count = zero_count + 1;
        }
    }
    printf("\nPositive elements count: %d", positive_count);
    printf("\nNegative elements count: %d", negative_count);
    printf("\nZero elements count: %d\n", zero_count);
    return 0;
}

