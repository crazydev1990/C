#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[9];
    int sum = 0;
    printf("Enter 9 numbers for the matrix:\n");
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 9; i++)
    {
        sum = sum + arr[i];
    }
    printf("\nSum of all matrix numbers is: %d\n", sum);
    return 0;
}

