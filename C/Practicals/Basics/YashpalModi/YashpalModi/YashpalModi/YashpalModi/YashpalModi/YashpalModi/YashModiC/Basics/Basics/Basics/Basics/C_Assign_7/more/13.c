#include <stdio.h>
#include<conio.h>

int main()
{
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", i * 5);
    }
    return 0;
}
