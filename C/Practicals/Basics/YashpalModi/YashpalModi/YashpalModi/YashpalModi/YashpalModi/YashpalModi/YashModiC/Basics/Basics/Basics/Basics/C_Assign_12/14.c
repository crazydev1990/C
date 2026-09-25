#include <stdio.h>
#include <conio.h>

void calculate_hcf_lcm(int a, int b)
{
    int hcf = 1;
    int lcm;
    int min;

    if (a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }

    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0)
        {
            if (b % i == 0)
            {
                hcf = i;
            }
        }
    }
    lcm = (a * b) / hcf;
    printf("\nHCF is: %d", hcf);
    printf("\nLCM is: %d\n", lcm);
}

void find_lsb(int num)
{
    int lsb;
    lsb = num & 1;
    printf("LSB (Least Significant Bit) is: %d\n", lsb);
}

int main()
{
    int num1;
    int num2;
    printf("Enter First Number for HCF/LCM: ");
    scanf("%d", &num1);
    printf("Enter Second Number for HCF/LCM: ");
    scanf("%d", &num2);
    calculate_hcf_lcm(num1, num2);
    printf("\n-------------------------\n");
    printf("\nEnter Number to find LSB: ");
    scanf("%d", &num1);
    find_lsb(num1);
    return 0;
}

