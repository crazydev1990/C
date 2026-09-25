#include <stdio.h>
#include<conio.h>

int main()
{
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", (2 * i) - 1);
    }
    return 0;
}
