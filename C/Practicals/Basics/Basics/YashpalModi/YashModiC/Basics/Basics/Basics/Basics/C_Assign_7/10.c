#include <stdio.h>
#include<conio.h>

int main()
{
    int n, count = 0, num = 1;
    int i, sum;
    printf("Enter n: ");
    scanf("%d", &n);
    while (count < n)
    {
        sum = 0;
        for (i = 1; i <= num / 2; i++)
        {
            if (num % i == 0)
                sum += i;
        }
        if (sum == num)
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    return 0;
}
