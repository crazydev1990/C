#include <stdio.h>
#include<conio.h>
#include <math.h>

int main()
{
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Square Root Series:\n");
    for (i = 1; i <= n; i++)
    {
        printf("%.2f ", sqrt(i));
    }
    printf("\n\nCube Root Series:\n");
    for (i = 1; i <= n; i++)
    {
        printf("%.2f ", cbrt(i));
    }
    return 0;
}
