#include <stdio.h>
#include <conio.h>

void show_all_factors(int num)
{
    printf("\nAll Factors: ");
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void show_prime_factors(int num)
{
    printf("Prime Factors: ");
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            int divisors = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    divisors = divisors + 1;
                }
            }

            if (divisors == 2)
            {
                printf("%d ", i);
            }
        }
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    show_all_factors(n);
    show_prime_factors(n);
    return 0;
}

