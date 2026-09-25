#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void check_even_odd();
void check_prime();
void check_palindrome();
void check_armstrong();
void check_perfect();
void check_magic();
void check_strong();
void check_happy();
void check_abundant();
void check_lucky();
void check_deficient();
void check_amicable();
void check_composite();
void check_neon();
void check_spy();
void check_niven();

int main()
{
    int choice;

    do
    {
        printf("\n--- MASTER NUMBER CHECKER ---");
        printf("\n1. Even or Odd");
        printf("\n2. Prime or Not");
        printf("\n3. Palindrome Number");
        printf("\n4. Armstrong Number");
        printf("\n5. Perfect Number");
        printf("\n6. Magic Number");
        printf("\n7. Strong Number");
        printf("\n8. Happy Number");
        printf("\n9. Abundant Number");
        printf("\n10. Lucky Number");
        printf("\n11. Deficient Number");
        printf("\n12. Amicable Numbers");
        printf("\n13. Composite Number");
        printf("\n14. Neon Number");
        printf("\n15. Spy Number");
        printf("\n16. Niven Number");
        printf("\n17. Exit");

        printf("\n\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                check_even_odd();
                break;
            case 2:
                check_prime();
                break;
            case 3:
                check_palindrome();
                break;
            case 4:
                check_armstrong();
                break;
            case 5:
                check_perfect();
                break;
            case 6:
                check_magic();
                break;
            case 7:
                check_strong();
                break;
            case 8:
                check_happy();
                break;
            case 9:
                check_abundant();
                break;
            case 10:
                check_lucky();
                break;
            case 11:
                check_deficient();
                break;
            case 12:
                check_amicable();
                break;
            case 13:
                check_composite();
                break;
            case 14:
                check_neon();
                break;
            case 15:
                check_spy();
                break;
            case 16:
                check_niven();
                break;
            case 17:
                printf("\nExiting program. Thank you!\n");
                exit(0);
            default:
                printf("\nInvalid Choice!\n");
        }
    } while (choice != 17);

    return 0;
}

void check_even_odd()
{
    int num;
    printf("\nEnter Number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("\n%d is EVEN\n", num);
    }
    else
    {
        printf("\n%d is ODD\n", num);
    }
}

void check_prime()
{
    int num;
    int count = 0;
    printf("\nEnter Number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count = count + 1;
        }
    }

    if (count == 2)
    {
        printf("\n%d is a PRIME number\n", num);
    }
    else
    {
        printf("\n%d is NOT a PRIME number\n", num);
    }
}

void check_palindrome()
{
    int num;
    int rev = 0;
    printf("\nEnter Number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp > 0)
    {
        rev = (rev * 10) + (temp % 10);
        temp = temp / 10;
    }

    if (rev == num)
    {
        printf("\n%d is a PALINDROME number\n", num);
    }
    else
    {
        printf("\n%d is NOT a PALINDROME number\n", num);
    }
}

void check_armstrong()
{
    int num;
    int sum = 0;
    int digits = 0;
    printf("\nEnter Number: ");
    scanf("%d", &num);

    int temp1 = num;
    while (temp1 > 0)
    {
        digits = digits + 1;
        temp1 = temp1 / 10;
    }

    int temp2 = num;
    while (temp2 > 0)
    {
        int rem = temp2 % 10;
        int power = 1;
        for (int i = 1; i <= digits; i++)
        {
            power = power * rem;
        }
        sum = sum + power;
        temp2 = temp2 / 10;
    }

    if (sum == num)
    {
        printf("\n%d is an ARMSTRONG number\n", num);
    }
    else
    {
        printf("\n%d is NOT an ARMSTRONG number\n", num);
    }
}

void check_perfect()
{
    int num;
    int sum = 0;
    printf("\nEnter Number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num)
    {
        printf("\n%d is a PERFECT number\n", num);
    }
    else
    {
        printf("\n%d is NOT a PERFECT number\n", num);
    }
}

void check_magic()
{
    int num;
    printf("\nEnter Number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp >= 10)
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
        printf("\n%d is a MAGIC number\n", num);
    }
    else
    {
        printf("\n%d is NOT a MAGIC number\n", num);
    }
}

void check_strong()
{
    int num;
    int sum = 0;
    printf("\nEnter Number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp > 0)
    {
        int rem = temp % 10;
        int fact = 1;
        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == num)
    {
        printf("\n%d is a STRONG number\n", num);
    }
    else
    {
        printf("\n%d is NOT a STRONG number\n", num);
    }
}

void check_happy()
{
    int num;
    printf("\nEnter Number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp != 1 && temp != 4)
    {
        int sum = 0;
        while (temp > 0)
        {
            int rem = temp % 10;
            sum = sum + (rem * rem);
            temp = temp / 10;
        }
        temp = sum;
    }

    if (temp == 1)
    {
        printf("\n%d is a HAPPY number\n", num);
    }
    else
    {
        printf("\n%d is NOT a HAPPY number\n", num);
    }
}

void check_abundant()
{
    int num;
    int sum = 0;
    printf("\nEnter Number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum > num)
    {
        printf("\n%d is an ABUNDANT number\n", num);
    }
    else
    {
        printf("\n%d is NOT an ABUNDANT number\n", num);
    }
}

void check_lucky()
{
    int num;
    int sum = 0;
    printf("\nEnter Number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp > 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }

    if (sum % 9 == 0)
    {
        printf("\n%d is a LUCKY number (Sum of digits is divisible by 9)\n", num);
    }
    else
    {
        printf("\n%d is NOT a LUCKY number\n", num);
    }
}

void check_deficient()
{
    int num;
    int sum = 0;
    printf("\nEnter Number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum < num)
    {
        printf("\n%d is a DEFICIENT number (Sum of proper divisors < number)\n", num);
    }
    else
    {
        printf("\n%d is NOT a DEFICIENT number\n", num);
    }
}

void check_amicable()
{
    int first_num;
    int second_num;
    int first_sum = 0;
    int second_sum = 0;

    printf("\nEnter First Number: ");
    scanf("%d", &first_num);
    printf("Enter Second Number: ");
    scanf("%d", &second_num);

    for (int i = 1; i < first_num; i++)
    {
        if (first_num % i == 0)
        {
            first_sum = first_sum + i;
        }
    }

    for (int i = 1; i < second_num; i++)
    {
        if (second_num % i == 0)
        {
            second_sum = second_sum + i;
        }
    }

    if (first_sum == second_num && second_sum == first_num)
    {
        printf("\n%d and %d are AMICABLE numbers\n", first_num, second_num);
    }
    else
    {
        printf("\n%d and %d are NOT AMICABLE numbers\n", first_num, second_num);
    }
}

void check_composite()
{
    int num;
    int count = 0;
    printf("\nEnter Number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count = count + 1;
        }
    }

    if (count > 2)
    {
        printf("\n%d is a COMPOSITE number (Has more than 2 divisors)\n", num);
    }
    else
    {
        printf("\n%d is NOT a COMPOSITE number\n", num);
    }
}

void check_neon()
{
    int num;
    int sum = 0;
    printf("\nEnter Number: ");
    scanf("%d", &num);

    int square = num * num;
    int temp = square;

    while (temp > 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }

    if (sum == num)
    {
        printf("\n%d is a NEON number (Sum of square digits == number)\n", num);
    }
    else
    {
        printf("\n%d is NOT a NEON number\n", num);
    }
}

void check_spy()
{
    int num;
    int sum = 0;
    int product = 1;
    printf("\nEnter Number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp > 0)
    {
        int rem = temp % 10;
        sum = sum + rem;
        product = product * rem;
        temp = temp / 10;
    }

    if (sum == product)
    {
        printf("\n%d is a SPY number (Sum of digits == Product of digits)\n", num);
    }
    else
    {
        printf("\n%d is NOT a SPY number\n", num);
    }
}

void check_niven()
{
    int num;
    int sum = 0;
    printf("\nEnter Number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp > 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }

    if (num % sum == 0)
    {
        printf("\n%d is a NIVEN / HARSHAD number (Divisible by sum of its digits)\n", num);
    }
    else
    {
       printf("\n%d is NOT a NIVEN number\n", num);
    }
}
