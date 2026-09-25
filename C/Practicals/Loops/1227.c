#include <stdio.h>
#include <conio.h>
void printFibonacciSeries(int);

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printFibonacciSeries(n);
    return 0;
}
void printFibonacciSeries(int n)
{
    int a = 0;
    int b = 1;
    int c;
    printf("\nFibonacci Series: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}


