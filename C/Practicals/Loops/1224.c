#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    checkSinglePrime(n);
    return 0;
}
void checkSinglePrime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count = count + 1;
        }
    }
    if (count == 2)
    {
        printf("%d is a Prime Number\n", n);
    }
    else
    {
        printf("%d is NOT a Prime Number\n", n);
    }
}


