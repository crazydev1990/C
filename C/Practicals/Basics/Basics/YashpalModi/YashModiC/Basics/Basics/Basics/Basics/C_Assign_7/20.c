#include <stdio.h>
#include<conio.h>

int main()
{
    int n, i;
    int term = 1, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", term);
        sum = sum + term;
        term = term * 2;
    }
    printf("\nterm = %d", term);
    return 0;
}
