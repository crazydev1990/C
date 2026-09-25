#include <stdio.h>
#include <conio.h>

int main()
{
    int arr1[3] = {30, 10, 50};
    int arr2[3] = {40, 20, 60};
    int arr3[6];
    int pos = 0;
    for (int i = 0; i < 3; i++)
    {
        arr3[pos] = arr1[i];
        pos = pos + 1;
    }
    for (int i = 0; i < 3; i++)
    {
        arr3[pos] = arr2[i];
        pos = pos + 1;
    }
    printf("Merged and Sorted Array: ");
    for (int num = 1; num <= 100; num++)
    {
        for (int i = 0; i < 6; i++)
        {
            if (arr3[i] == num)
            {
                printf("%d ", arr3[i]);
            }
        }
    }
    printf("\n");
    return 0;
}

