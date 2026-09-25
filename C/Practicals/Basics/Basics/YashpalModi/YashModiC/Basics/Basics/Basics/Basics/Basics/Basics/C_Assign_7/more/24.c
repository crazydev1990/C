#include <stdio.h>
#include<conio.h>

int main()
{
    int n, i;
    double sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("1/%d ", i*i*i);
        //sum = sum + (1.0 / (i * i * i));
    }
    //printf("\nSum = %.6f", sum);
    return 0;
}
