#include <stdio.h>
#include<conio.h>

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int k = i; k < n - 1; k++)
        {
            printf("  ");
        }
        int coef = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%4d", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n"); // લાઈન બદલવા માટે
    }
    return 0;
}

