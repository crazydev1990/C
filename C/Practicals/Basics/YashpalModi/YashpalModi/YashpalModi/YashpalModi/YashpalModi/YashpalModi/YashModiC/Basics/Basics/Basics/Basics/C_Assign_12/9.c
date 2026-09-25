#include <stdio.h>
#include <conio.h>

int get_digit_sum(int num)
{
    int sum = 0;
    int temp = num;
    while (temp > 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }
    return sum;
}

int main()
{
    int n;
    int ans;
    printf("Enter a number: ");
    scanf("%d", &n);
    ans = get_digit_sum(n);
    printf("\nSum of digits is: %d\n", ans);
    return 0;
}
