#include <stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    printf("Enter N: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 1)
            printf("%.1f ", i/2.0 + 1);
        else
            printf("%d ", i + 1);
    }
    return 0;
}
