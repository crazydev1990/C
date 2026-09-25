#include <stdio.h>
#include<conio.h>

int main()
{
    int n, count = 0, num = 1;
    int temp, sum, digit;
    printf("Enter n: ");
    scanf("%d", &n);
    while (count < n)
    {
        temp = num;
        while (temp > 9)
        {
            sum = 0;
            while (temp > 0)
            {
                digit = temp % 10;
                sum += digit;
                temp /= 10;
            }
            temp = sum;
        }
        if (temp == 1)
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    return 0;
}
