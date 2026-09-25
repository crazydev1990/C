#include <stdio.h>
#include <conio.h>

void printFirstNPrimes(int n);
void findNextImmediatePrime(int num);

int main()
{
    int n, num;
    printf("Enter how many prime numbers you want to print (N): ");
    scanf("%d", &n);
    printFirstNPrimes(n);
    printf("\nEnter a number to find its next immediate prime: ");
    scanf("%d", &num);
    findNextImmediatePrime(num);
    return 0;
}

void printFirstNPrimes(int n)
{
    int number_to_check = 2;
    int primes_found = 0;
    printf("First %d prime numbers are: ", n);
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
            printf("%d ", number_to_check);
            primes_found = primes_found + 1;
        }
        number_to_check = number_to_check + 1;
    }
    printf("\n");
}

void findNextImmediatePrime(int num)
{
    int next_num = num + 1;
    while (1)
    {
        int count = 0;
        for (int i = 1; i <= next_num; i++)
        {
            if (next_num % i == 0)
            {
                count = count + 1;
            }
        }
        if (count == 2)
        {
            printf("The next immediate prime after %d is: %d\n", num, next_num);
            break;
        }
        next_num = next_num + 1;
    }
}


