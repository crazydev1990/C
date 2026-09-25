#include <stdio.h>
#include<conio.h>

int main()
{
    int n, i, j, sum;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = 0;
        for (j = 1; j <= i; j++)
        {
            sum = sum + j;
        }
        printf("%d ", sum);
    }
    return 0;
}
