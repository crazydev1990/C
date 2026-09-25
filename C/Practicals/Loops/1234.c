#include <stdio.h>
#include <conio.h>

void find_factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("\nFactorial of %d is: %d\n", num, fact);
}

void find_factors(int num)
{
    printf("\nFactors of %d are: ", num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void find_fibonacci(int terms)
{
    int first = 0;
    int second = 1;
    int next;
    printf("\nFibonacci Series up to %d terms: ", terms);
    for (int i = 1; i <= terms; i++)
    {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter a number for Factorial and Factors: ");
    scanf("%d", &n);
    find_factorial(n);
    find_factors(n);
    printf("\n-------------------------\n");
    printf("\nEnter number of terms for Fibonacci: ");
    scanf("%d", &n);
    find_fibonacci(n);
    return 0;
}

