#include <stdio.h>
#include <conio.h>

int main()
{
    int numbers[5];
    int max_digit, min_digit;
    int even_count = 0, odd_count = 0, prime_count = 0;
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }
    max_digit = numbers[0];
    min_digit = numbers[0];

    for (int i = 0; i < 5; i++)
    {
        int num = numbers[i];

        if (num > max_digit)
        {
            max_digit = num;
        }
        if (num < min_digit)
        {
            min_digit = num;
        }

        if (num % 2 == 0)
        {
            even_count = even_count + 1;
        }
        else
        {
            odd_count = odd_count + 1;
        }

        int count = 0;
        for (int j = 1; j <= num; j++)
        {
            if (num % j == 0)
            {
                count = count + 1;
            }
        }
        if (count == 2)
        {
            prime_count = prime_count + 1;
        }
    }
    printf("\n--- Array Analysis Results ---");
    printf("\nMaximum number: %d", max_digit);
    printf("\nMinimum number: %d", min_digit);
    printf("\nEven numbers count: %d", even_count);
    printf("\nOdd numbers count: %d", odd_count);
    printf("\nPrime numbers count: %d\n", prime_count);
    return 0;
}

