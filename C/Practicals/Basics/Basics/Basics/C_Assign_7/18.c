#include <stdio.h>
#include<conio.h>

int main()
{
    int n, i;
    long long fact = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        printf("%lld ", fact);
    }
    return 0;
}
