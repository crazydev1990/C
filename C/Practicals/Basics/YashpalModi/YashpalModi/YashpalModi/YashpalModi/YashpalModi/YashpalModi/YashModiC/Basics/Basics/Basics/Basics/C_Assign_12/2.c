#include <stdio.h>
#include <conio.h>

void calculateSumOfSquares(int n);
void calculateSumOfPrimes(int n);

int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("\n--- RESULTS ---");
    calculateSumOfSquares(n);
    calculateSumOfPrimes(n);
    return 0;
}

void calculateSumOfSquares(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i * i); // સંખ્યાનો પોતાની જ સાથે ગુણાકાર (વર્ગ) કરીને ઉમેરો
    }
    printf("\nSum of squares of first %d numbers: %d", n, sum);
}

void calculateSumOfPrimes(int n)
{
    int sum = 0;
    int primes_found = 0;
    int number_to_check = 2;

    while (primes_found < n)
    {
        int count = 0;
        for (int i = 1; i <= number_to_check; i++)
        {
            if (number_to_check % i == 0)
            {
                count = count + 1;
            }
        }

        if (count == 2)
        {
            sum = sum + number_to_check;
            primes_found = primes_found + 1;
        }

        number_to_check = number_to_check + 1;
    }
    printf("\nSum of first %d Prime numbers: %d\n", n, sum);
}

