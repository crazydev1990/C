#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void digit_sum();
void cube_root();
void calculate_power();
void calculate_squareroot();
void show_factors();
void factorial();
void reverse_num();
void swap_digits();
void max_min_rep();
void check_num();

int main()
{
    int choice;

    printf("\n--- MENU ---");
    printf("\n1. Sum of Digits");
    printf("\n2. Square, Cube, Root");
    printf("\n3. Power Calculation (A^B)");
    printf("\n4. Square Root Calculation");
    printf("\n5. Find Factors");
    printf("\n6. Find Factorial");
    printf("\n7. Reverse Number");
    printf("\n8. Swap First Last");
    printf("\n9. Max, Min, Repeated");
    printf("\n10. Check and Count");
    printf("\n11. Exit");
    printf("\n\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            digit_sum();
            break;
        case 2:
            cube_root();
            break;
        case 3:
            calculate_power();
            break;
        case 4:
            calculate_squareroot();
            break;
        case 5:
            show_factors();
            break;
        case 6:
            factorial();
            break;
        case 7:
            reverse_num();
            break;
        case 8:
            swap_digits();
            break;
        case 9:
            max_min_rep();
            break;
        case 10:
            check_num();
            break;
        case 11:
            exit(0);
        default:
            printf("\nInvalid Choice!\n");
    }
    return 0;
}

void digit_sum()
{
    int num;
    int sum = 0;

    printf("\nEnter Number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    printf("\nSum of digits: %d\n", sum);
}

void cube_root()
{
    int num;
    int root = 0;

    printf("\nEnter Number: ");
    scanf("%d", &num);

    for (int i = 1; i * i <= num; i++)
    {
        root = i;
    }
    printf("\nSquare: %d", num * num);
    printf("\nCube: %d", num * num * num);
    printf("\nApprox Root: %d\n", root);
}

void calculate_power()
{
    int base;
    int exp;
    int ans = 1;

    printf("\nEnter Base number: ");
    scanf("%d", &base);
    printf("Enter Power number: ");
    scanf("%d", &exp);

    for (int i = 1; i <= exp; i++)
    {
        ans = ans * base;
    }
    printf("\nSquare of %d is: %d", base, base * base);
    printf("\nResult of %d^%d is: %d\n", base, exp, ans);
}

void calculate_squareroot()
{
    int num;
    int ans = 0;

    printf("\nEnter Number to find Square Root: ");
    scanf("%d", &num);

    for (int i = 1; i * i <= num; i++)
    {
        ans = i;
    }

    if (ans * ans == num)
    {
        printf("\nPerfect Square Root of %d is: %d\n", num, ans);
    }
    else
    {
        printf("\nApprox Square Root of %d is: %d\n", num, ans);
    }
}

void show_factors()
{
    int num;

    printf("\nEnter Number: ");
    scanf("%d", &num);

    printf("\nFactors: ");
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void factorial()
{
    int num;
    int fact = 1;

    printf("\nEnter Number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("\nFactorial: %d\n", fact);
}

void reverse_num()
{
    int num;
    int rev = 0;

    printf("\nEnter Number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        rev = (rev * 10) + (num % 10);
        num = num / 10;
    }
    printf("\nReverse: %d\n", rev);
}

void swap_digits()
{
    int num;
    int first;
    int last;
    int count = 1;

    printf("\nEnter Number: ");
    scanf("%d", &num);

    last = num % 10;
    first = num;
    int temp = num;

    while (temp >= 10)
    {
        first = first / 10;
        temp = temp / 10;
        count = count * 10;
    }

    int mid = num % count;
    mid = mid / 10;

    int ans = (last * count) + (mid * 10) + first;
    printf("\nSwapped: %d\n", ans);
}

void max_min_rep()
{
    int num;
    int max = 0;
    int min = 9;

    printf("\nEnter Number: ");
    scanf("%d", &num);

    int temp = num;
    while (num > 0)
    {
        int rem = num % 10;
        if (rem > max)
        {
            max = rem;
        }
        if (rem < min)
        {
            min = rem;
        }
        num = num / 10;
    }
    printf("\nMax Digit: %d", max);
    printf("\nMin Digit: %d", min);

    int rep_num = -1;
    int max_seen = 0;

    for (int i = 0; i <= 9; i++)
    {
        int count = 0;
        int check_temp = temp;
        while (check_temp > 0)
        {
            if (check_temp % 10 == i)
            {
                count = count + 1;
            }
            check_temp = check_temp / 10;
        }
        if (count > max_seen)
        {
            max_seen = count;
            rep_num = i;
        }
    }

    if (max_seen > 1)
    {
        printf("\nRepeated Digit: %d\n", rep_num);
    }
    else
    {
        printf("\nNo digit repeated\n");
    }
}

void check_num()
{
    int num;
    int p = 0;

    printf("\nEnter Number: ");
    scanf("%d", &num);

    printf("\n--- PROPERTIES ---");
    if (num > 0)
    {
        printf("\nPOSITIVE");
    }
    if (num < 0)
    {
        printf("\nNEGATIVE");
    }
    if (num == 0)
    {
        printf("\nZERO");
    }

    if (num % 2 == 0)
    {
        printf("\nEVEN");
    }
    else
    {
        printf("\nODD");
    }

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            p = p + 1;
        }
    }

    if (p == 2)
    {
        printf("\nPRIME\n");
    }
    else
    {
        printf("\nNOT PRIME\n");
    }

    int temp;
    if (num < 0)
    {
        temp = -num;
    }
    else
    {
        temp = num;
    }

    int total = 0;
    int even = 0;
    int odd = 0;
    int prime = 0;

    if (temp == 0)
    {
        total = 1;
        even = 1;
    }

    while (temp > 0)
    {
        int rem = temp % 10;
        total = total + 1;

        if (rem % 2 == 0)
        {
            even = even + 1;
        }
        if (rem % 2 != 0)
        {
            odd = odd + 1;
        }
        if (rem == 2 || rem == 3 || rem == 5 || rem == 7)
        {
            prime = prime + 1;
        }

        temp = temp / 10;
    }

    printf("\n--- DIGIT COUNTS ---");
    printf("\nTotal Digits: %d", total);
    printf("\nEven Digits: %d", even);
    printf("\nOdd Digits: %d", odd);
    printf("\nPrime Digits: %d\n", prime);
}
