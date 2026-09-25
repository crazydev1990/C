#include <stdio.h>
#include <conio.h>

void search_digit(int num, int digit)
{
    int current_pos = 1;
    int found_pos = 0;
    int temp = num;
    while (temp > 0)
    {
        int rem = temp % 10;

        if (rem == digit)
        {
            found_pos = current_pos;
        }

        current_pos = current_pos + 1;
        temp = temp / 10;
    }
    if (found_pos > 0)
    {
        printf("\nYES! Digit %d is found at position %d from right.\n", digit, found_pos);
    }
    else
    {
        printf("\nNO! Digit %d is not present in the number.\n", digit);
    }
}

int main()
{
    int num;
    int digit;
    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Enter Digit to search: ");
    scanf("%d", &digit);
    search_digit(num, digit);
    return 0;
}


