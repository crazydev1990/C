#include <stdio.h>
#include<conio.h>

int main()
{
    int n, count = 0, num = 1;
    int temp, digit, reverse;
    printf("Enter n: ");
    scanf("%d", &n);
    while (count < n)
    {
        temp = num;
        reverse = 0;
        while (temp > 0)
        {
            digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp /= 10;
        }
        if (reverse == num)
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    return 0;
}
