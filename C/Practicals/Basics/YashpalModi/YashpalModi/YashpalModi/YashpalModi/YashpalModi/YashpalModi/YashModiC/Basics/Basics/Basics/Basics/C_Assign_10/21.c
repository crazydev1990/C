#include <stdio.h>
#include <conio.h>

void findFactors(int n);
int countDivisors(int factor);
int isPrimeCheck(int divcnt, int factor);

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    findFactors(n);
    return 0;
}

void findFactors(int n)
{
    int total_factors = 0, prime_count = 0,divisorsCnt;
    printf("All factors are:\n");
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            total_factors++;
            divisorsCnt= countDivisors(i);
            if (isPrimeCheck(divisorsCnt, i))
            {
                prime_count++;
            }
        }
    }
    printf("\nTotal factors: %d", total_factors);
    printf("\nTotal prime factors: %d\n", prime_count);
}

int countDivisors(int factor)
{
    int divisorsCnt = 0;
    for(int j = 1; j <= factor; j++)
    {
        if(factor % j == 0)
        {
           divisorsCnt++;
        }
    }
    return divisorsCnt;
}

int isPrimeCheck(int divcnt, int factor)
{
    if(divcnt == 2)
    {
       printf("%d (Prime)\n", factor);
       return 1;
    }
    printf("%d\n", factor);
    return 0;
}
