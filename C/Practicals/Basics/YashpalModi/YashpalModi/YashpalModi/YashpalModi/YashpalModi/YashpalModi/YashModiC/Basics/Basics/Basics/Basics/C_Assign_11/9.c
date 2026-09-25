#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[6];
    printf("Enter 6 numbers:\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nFinal Array: ");
    for (int i = 0; i < 6; i = i + 2)
    {
        printf("%d %d ", arr[i + 1], arr[i]);
    }
    printf("\n");
    return 0;
}
