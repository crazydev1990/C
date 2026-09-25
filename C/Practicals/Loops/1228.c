#include <stdio.h>
#include <conio.h>

void printPascal(int rows);
int nCr(int n, int r);
int factorial(int num);

int main()
{
    int rows;
    printf("Enter rows: ");
    scanf("%d", &rows);
    printPascal(rows);
    return 0;
}

void printPascal(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (j < rows - i - 1)
            {
                printf(" ");
            }
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", nCr(i, j));
        }
        printf("\n");
    }
}

int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

