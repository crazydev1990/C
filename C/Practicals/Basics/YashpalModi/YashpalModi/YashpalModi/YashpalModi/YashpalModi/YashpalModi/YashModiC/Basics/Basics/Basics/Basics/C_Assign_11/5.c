#include <stdio.h>
#include <conio.h>

int main()
{
    int arr1[5], arr2[5], arr3[5];
    printf("Enter 5 numbers for First Array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter 5 numbers for Second Array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
    printf("\nResulting Third Array after Addition is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d ", arr3[i]);
    }
    printf("\n");
    return 0;
}

