#include <stdio.h>
#include <conio.h>

void check_lucky(int num)
{
    int num_divisors = 0;
    int sum = 0;
    int sum_divisors = 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            num_divisors = num_divisors + 1;
        }
    }
    int temp = num;
    while (temp > 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }
    for (int i = 1; i <= sum; i++)
    {
        if (sum % i == 0)
        {
            sum_divisors = sum_divisors + 1;
        }
    }
    if (num_divisors == 2 && sum_divisors == 2)
    {
        printf("\nYES! %d is a LUCKY number.\n", num);
    }
    else
    {
        printf("\nNO! %d is NOT a LUCKY number.\n", num);
    }
}

int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    check_lucky(n);
    return 0;
}
