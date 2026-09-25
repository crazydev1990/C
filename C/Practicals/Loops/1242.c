#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, j;
    float fact, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        fact = 1;
        for(j = 1; j < i; j++)
        {
            fact = fact * j;
        }
        sum = sum + fact;
    }
    printf("\n Sum of Series = %.2f", sum);
    getch();
    return 0;
}

