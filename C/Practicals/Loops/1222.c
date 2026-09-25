#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void countTotalDigits(int n);
void countEvenOddDigits(int n);
void countPrimeDigits(int n);
void findFirstAndLastDigit(int n);
void findMiddleDigit(int n);
void calculateSumSquareCube(int n);
void checkPalindrome(int n);
void checkArmstrong(int n);
void checkPerfectNumber(int n);
void checkMagicNumber(int n);
void swapFirstAndLastDigit(int n);
void findMostRepeatedDigit(int n);
void findMaxMinDigitsAndOccurrences(int n);
int total_digits = 0;
int even_count = 0;
int odd_count = 0;
int prime_count = 0;
int first_digit = 0;
int last_digit = 0;
int second_last_digit = 0;
int middle_digit = 0;
int digits_sum = 0;
int digits_square_sum = 0;
int digits_cube_sum = 0;

int main()
{
    int n, choice;
    printf("Enter number: ");
    scanf("%d", &n);
    countTotalDigits(n);
    countEvenOddDigits(n);
    countPrimeDigits(n);
    findFirstAndLastDigit(n);
    findMiddleDigit(n);
    calculateSumSquareCube(n);
    printf("\n--- MENU ---");
    printf("\n1. Show Basic Counts (Total, Even, Odd, Prime)");
    printf("\n2. Show Positional Digits (First, Last, Second Last, Middle)");
    printf("\n3. Show Sum, Square Sum, and Cube Sum");
    printf("\n4. Check Palindrome");
    printf("\n5. Check Armstrong");
    printf("\n6. Check Perfect Number");
    printf("\n7. Check Magic Number");
    printf("\n8. Swap First and Last Digit");
    printf("\n9. Find Most Repeated Digit");
    printf("\n10. Find Max/Min Digits and Occurrences");
    printf("\n11. Exit");
    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nTotal digits: %d", total_digits);
            printf("\nEven count: %d", even_count);
            printf("\nOdd count: %d", odd_count);
            printf("\nPrime count: %d\n", prime_count);
            break;
        case 2:
            printf("\nFirst digit: %d", first_digit);
            printf("\nLast digit: %d", last_digit);
            printf("\nSecond last digit: %d", second_last_digit);
            printf("\nMiddle digit: %d\n", middle_digit);
            break;
        case 3:
            printf("\nSum of each digit: %d", digits_sum);
            printf("\nSum of square of each digit: %d", digits_square_sum);
            printf("\nSum of cube of each digit: %d\n", digits_cube_sum);
            break;
        case 4:
            checkPalindrome(n);
            break;
        case 5:
            checkArmstrong(n);
            break;
        case 6:
            checkPerfectNumber(n);
            break;
        case 7:
            checkMagicNumber(n);
            break;
        case 8:
            swapFirstAndLastDigit(n);
            break;
        case 9:
            findMostRepeatedDigit(n);
            break;
        case 10:
            findMaxMinDigitsAndOccurrences(n);
            break;
        case 11:
            exit(0);
        default:
            printf("\nInvalid Choice!\n");
    }
    return 0;
}

void countTotalDigits(int n)
{
    int temp = n;
    while (temp > 0)
    {
        total_digits = total_digits + 1;
        temp = temp / 10;
    }
}

void countEvenOddDigits(int n)
{
    int temp = n;
    while (temp > 0)
    {
        int digit = temp % 10;
        if (digit % 2 == 0)
        {
            even_count = even_count + 1;
        }
        else
        {
            odd_count = odd_count + 1;
        }
        temp = temp / 10;
    }
}

void countPrimeDigits(int n)
{
    int temp = n;
    while (temp > 0)
    {
        int digit = temp % 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            prime_count = prime_count + 1;
        }
        temp = temp / 10;
    }
}

void findFirstAndLastDigit(int n)
{
    last_digit = n % 10;
    second_last_digit = (n / 10) % 10;

    int temp = n;
    while (temp > 0)
    {
        first_digit = temp % 10;
        temp = temp / 10;
    }
}

void findMiddleDigit(int n)
{
    int temp = n;
    int current = 0;
    int middle_pos = total_digits / 2;

    while (temp > 0)
    {
        int digit = temp % 10;
        if (current == middle_pos)
        {
            middle_digit = digit;
        }
        current = current + 1;
        temp = temp / 10;
    }
}

void calculateSumSquareCube(int n)
{
    int temp = n;
    while (temp > 0)
    {
        int digit = temp % 10;
        digits_sum = digits_sum + digit;
        digits_square_sum = digits_square_sum + (digit * digit);
        digits_cube_sum = digits_cube_sum + (digit * digit * digit);
        temp = temp / 10;
    }
}

void checkPalindrome(int n)
{
    int temp = n;
    int reversed = 0;
    while (temp > 0)
    {
        int digit = temp % 10;
        reversed = (reversed * 10) + digit;
        temp = temp / 10;
    }
    if (n == reversed)
    {
        printf("\n%d is a Palindrome Number\n", n);
    }
    else
    {
        printf("\n%d is NOT a Palindrome Number\n", n);
    }
}

void checkArmstrong(int n)
{
    int temp = n;
    int sum = 0;
    while (temp > 0)
    {
        int digit = temp % 10;
        int power = 1;
        for (int i = 1; i <= total_digits; i++)
        {
            power = power * digit;
        }
        sum = sum + power;
        temp = temp / 10;
    }
    if (n == sum)
    {
        printf("\n%d is an Armstrong Number\n", n);
    }
    else
    {
        printf("\n%d is NOT an Armstrong Number\n", n);
    }
}

void checkPerfectNumber(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        printf("\n%d is a Perfect Number\n", n);
    }
    else
    {
        printf("\n%d is NOT a Perfect Number\n", n);
    }
}

void checkMagicNumber(int n)
{
    int temp = n;
    while (temp > 9)
    {
        int sum = 0;
        while (temp > 0)
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }
        temp = sum;
    }
    if (temp == 1)
    {
        printf("\n%d is a Magic Number\n", n);
    }
    else
    {
        printf("\n%d is NOT a Magic Number\n", n);
    }
}

void swapFirstAndLastDigit(int n)
{
    if (total_digits < 2)
    {
        printf("\nNumber after swap: %d\n", n);
        return;
    }

    int p = 1;
    for (int i = 1; i < total_digits; i++)
    {
        p = p * 10;
    }

    int middle_part = (n % p) / 10;
    int swapped_num = (last_digit * p) + (middle_part * 10) + first_digit;

    printf("\nNumber after swap: %d\n", swapped_num);
}

void findMostRepeatedDigit(int n)
{
    int most_repeated = -1;
    int max_frequency = 0;

    for (int i = 0; i <= 9; i++)
    {
        int current_frequency = 0;
        int temp = n;

        while (temp > 0)
        {
            int digit = temp % 10;
            if (digit == i)
            {
                current_frequency = current_frequency + 1;
            }
            temp = temp / 10;
        }

        if (current_frequency > max_frequency)
        {
            max_frequency = current_frequency;
            most_repeated = i;
        }
    }

    if (max_frequency > 1)
    {
        printf("\nMost repeated digit: %d (Repeated %d times)\n", most_repeated, max_frequency);
    }
    else
    {
        printf("\nNo digit is repeated\n");
    }
}

void findMaxMinDigitsAndOccurrences(int n)
{
    int temp = n;
    int max_digit = 0;
    int min_digit = 9;
    int max_occ = 0;
    int min_occ = 0;

    while (temp > 0)
    {
        int digit = temp % 10;
        if (digit > max_digit)
        {
            max_digit = digit;
        }
        if (digit < min_digit)
        {
            min_digit = digit;
        }
        temp = temp / 10;
    }

    temp = n;
    while (temp > 0)
    {
        int digit = temp % 10;
        if (digit == max_digit)
        {
            max_occ = max_occ + 1;
        }
        if (digit == min_digit)
        {
            min_occ = min_occ + 1;
        }
        temp = temp / 10;
    }

    printf("\nMaximum digit: %d (Repeated %d times)", max_digit, max_occ);
    printf("\nMinimum digit: %d (Repeated %d times)\n", min_digit, min_occ);
}
