#include <stdio.h>
#include <conio.h>

int main()
{
    int n, sum = 0;
    int numbers[100];
    for (int i = 0; i < 10; i++)
    {
        numbers[i] = i + 1;
    }
    printf("\nThe first %d numbers are: ", n);
    for (int i = 0; i < 10; i++)
    {
        printf("\n%d ", numbers[i]);
        sum = sum + numbers[i];
    }
    printf("\nSum of these numbers is: %d\n", sum);
    return 0;
}

