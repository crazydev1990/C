#include <stdio.h>
#include<conio.h>

int main()
{
    int n, i;
    int sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i == 1 || i % 2 == 0)
            //sum = sum + (i * i);
            printf(" %d ",i * i);
        else
            //sum = sum - (i * i);
             printf(" %d ",-(i * i));

    }
    //printf("Result = %d", sum);
    return 0;
}
