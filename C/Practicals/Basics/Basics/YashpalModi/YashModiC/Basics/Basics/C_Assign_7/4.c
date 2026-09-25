#include <stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", (i*i));
    }
    return 0;
}
