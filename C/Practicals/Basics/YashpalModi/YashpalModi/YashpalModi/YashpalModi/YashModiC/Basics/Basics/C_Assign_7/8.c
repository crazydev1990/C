#include <stdio.h>
#include<conio.h>

int main()
{
    int n, count = 0, num = 1;
    int temp, digit, sum, fact, i;
    printf("Enter n: ");
    scanf("%d", &n);
    while (count < n)
    {
        temp = num;
        sum = 0;
        while (temp > 0)
        {
            digit = temp % 10;
            fact = 1;
            for (i = 1; i <= digit; i++)
                fact *= i;

            sum += fact;
            temp /= 10;
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
