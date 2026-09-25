#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void calculateHCF(int a, int b);
void calculateLCM(int a, int b);
void checkLSB(int a, int b);

int main()
{
    int num1, num2, choice;
    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    printf("\n--- MENU ---");
    printf("\n1. Find HCF / GCD");
    printf("\n2. Find LCM");
    printf("\n3. Check LSB (Least Significant Bit)");
    printf("\n4. Exit");
    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            calculateHCF(num1, num2);
            break;
        case 2:
            calculateLCM(num1, num2);
            break;
        case 3:
            checkLSB(num1, num2);
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid Choice!\n");
    }

    return 0;
}

void calculateHCF(int a, int b)
{
    int hcf = 1;
    int smallest;
    if (a < b)
    {
        smallest = a;
    }
    else
    {
        smallest = b;
    }

    for (int i = 1; i <= smallest; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    printf("\nHCF of %d and %d is: %d\n", a, b, hcf);
}

void calculateLCM(int a, int b)
{
    int hcf = 1;
    int smallest;
    if (a < b)
    {
        smallest = a;
    }
    else
    {
        smallest = b;
    }
    for (int i = 1; i <= smallest; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    int lcm = (a * b) / hcf;
    printf("\nLCM of %d and %d is: %d\n", a, b, lcm);
}

void checkLSB(int a, int b)
{
    int lsb_a = a % 2;
    int lsb_b = b % 2;
    printf("\nLSB of %d is: %d (Number is %s)", a, lsb_a, (lsb_a == 0) ? "Even" : "Odd");
    printf("\nLSB of %d is: %d (Number is %s)\n", b, lsb_b, (lsb_b == 0) ? "Even" : "Odd");
}

