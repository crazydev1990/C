#include <stdio.h>
#include <conio.h>

int main()
{
    int numbers[10];
    int prime_found = 0;
    int num = 2;
    int sum = 0;

    while (prime_found < 10)
    {
        int count = 0;
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count = count + 1;
            }
        }

        if (count == 2)
        {
            numbers[prime_found] = num;
            prime_found = prime_found + 1;
        }

        num = num + 1;
    }
    printf("The first 10 prime numbers are: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
        sum = sum + numbers[i];
    }
    printf("\nSum of these 10 prime numbers is: %d\n", sum);
    return 0;
}

