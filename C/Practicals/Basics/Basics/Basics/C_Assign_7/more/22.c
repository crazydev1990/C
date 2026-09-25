#include <stdio.h>
#include<conio.h>

int main()
{
    int n, i;
    double sum = 0;
    long long fact = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        printf("1/%lld ", fact);
        //sum = sum + (1.0 / fact);
    }
    //printf("\n = %.6f", sum);
    return 0;
}
