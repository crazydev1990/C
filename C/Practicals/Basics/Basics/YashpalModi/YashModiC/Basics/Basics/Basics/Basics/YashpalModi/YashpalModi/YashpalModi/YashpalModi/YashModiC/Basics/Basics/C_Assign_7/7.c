#include <stdio.h>
#include<conio.h>

int main()
{
    int n, count = 0, num = 1;
    int temp, digit, digits, sum, power, i;
    printf("Enter n: ");
    scanf("%d", &n);
    while (count < n)
    {
        temp = num;
        digits = 0;
        while (temp > 0)
        {
            digits++;
            temp /= 10;
        }
        temp = num;
        sum = 0;
        while (temp > 0)
        {
            digit = temp % 10;
            power = 1;
            for (i = 1; i <= digits; i++)
                power *= digit;
            sum += power;
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
