#include <stdio.h>
#include <conio.h>

void calculateNaturalSum(int n);
void calculateEvenSum(int n);
void calculateOddSum(int n);

int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("\n--- RESULTS ---");
    calculateNaturalSum(n);
    calculateEvenSum(n);
    calculateOddSum(n);
    return 0;
}
void calculateNaturalSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("\nSum of first %d Natural numbers: %d", n, sum);
}
void calculateEvenSum(int n)
{
    int sum = 0;
    int even_number = 2;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + even_number;
        even_number = even_number + 2;
    }
    printf("\nSum of first %d Even numbers: %d", n, sum);
}
void calculateOddSum(int n)
{
    int sum = 0;
    int odd_number = 1;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + odd_number;
        odd_number = odd_number + 2;
    }
    printf("\nSum of first %d Odd numbers: %d\n", n, sum);
}

