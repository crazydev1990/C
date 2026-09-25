#include <stdio.h>
#include <conio.h>

void findFactors(int);
int isPrimeCheck(int, int);

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
    int total_factors = 0, prime_count = 0;
    printf("All factors are:\n");
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            total_factors++;
            int divisorsCnt = 0;
            for(int j = 1; j <= i; j++)
            {
                if(i % j == 0)
                {
                   divisorsCnt++;
                }
            }
            if (isPrimeCheck(divisorsCnt, i))
            {
                prime_count++;
            }
        }
    }
    printf("\nTotal factors: %d", total_factors);
    printf("\nTotal prime factors: %d\n", prime_count);
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
