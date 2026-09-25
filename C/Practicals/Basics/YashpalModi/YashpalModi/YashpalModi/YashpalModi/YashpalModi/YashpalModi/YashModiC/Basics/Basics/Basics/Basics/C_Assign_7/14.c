#include <stdio.h>
#include<conio.h>

int main()
{
    int n, count = 0, num = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    while (count < n)
    {
        if (num % 3 == 0 && num % 5 == 0)
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    return 0;
}
