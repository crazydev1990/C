#include <stdio.h>
#include<conio.h>

int main()
{
    int x, n, i;
    int term = 1, sum = 0;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        term = term * x;
        printf("%d ", term);
        sum = sum + term;
    }
    printf("\nterm = %d", term);
    return 0;
}
