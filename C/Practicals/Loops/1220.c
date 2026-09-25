#include <stdio.h>
#include <conio.h>

int factorial(int);

int main()
{
    int n, r;
    int arrangements;
    printf("Enter total items (n): ");
    scanf("%d", &n);
    printf("Enter items to select (r): ");
    scanf("%d", &r);
    arrangements = factorial(n) / factorial(n - r);
    printf("\nTotal Possible Arrangements: %d\n", arrangements);
    return 0;
}

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
