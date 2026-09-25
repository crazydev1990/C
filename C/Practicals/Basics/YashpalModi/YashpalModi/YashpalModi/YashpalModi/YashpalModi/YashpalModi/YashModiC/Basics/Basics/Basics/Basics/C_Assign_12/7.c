 #include <stdio.h>
#include <conio.h>

int is_palindrome(int num)
{
    int rev = 0;
    int temp = num;
    while (temp > 0)
    {
        rev = (rev * 10) + (temp % 10);
        temp = temp / 10;
    }
    if (num == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    int found = 0;
    int num = 1;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("\nResult: ");
    while (found < n)
    {
        int sq = num * num;
        if (is_palindrome(sq) == 1)
        {
            printf("%d ", num);
            found = found + 1;
        }
        num = num + 1;
    }
    printf("\n");
    return 0;
}
