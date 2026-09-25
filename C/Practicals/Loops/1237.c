#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void swap_with_temp();
void swap_without_temp();
void add_nums();
void sub_nums();
void mult_nums();
void div_nums();
void check_greater();

int main()
{
    int choice;

    do
    {
        printf("\n--- TWO NUMBER CALCULATOR MENU ---");
        printf("\n1. Swap Values (Using 3rd Variable)");
        printf("\n2. Swap Values (Without 3rd Variable)");
        printf("\n3. Addition");
        printf("\n4. Subtraction");
        printf("\n5. Multiplication");
        printf("\n6. Division");
        printf("\n7. Check Greater Of 2 Nos");
        printf("\n8. Exit");
        printf("\n\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                swap_with_temp();
                break;
            case 2:
                swap_without_temp();
                break;
            case 3:
                add_nums();
                break;
            case 4:
                sub_nums();
                break;
            case 5:
                mult_nums();
                break;
            case 6:
                div_nums();
                break;
            case 7:
                check_greater();
                break;
            case 8:
                printf("\nExiting program. Thank you!\n");
                exit(0);
            default:
                printf("\nInvalid Choice! Please try again.\n");
        }
    } while (choice != 7);

    return 0;
}

void swap_with_temp()
{
    int a;
    int b;
    int temp;

    printf("\nEnter First Number (A): ");
    scanf("%d", &a);
    printf("Enter Second Number (B): ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter Swap -> A = %d, B = %d\n", a, b);
}

void swap_without_temp()
{
    int a;
    int b;

    printf("\nEnter First Number (A): ");
    scanf("%d", &a);
    printf("Enter Second Number (B): ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter Swap -> A = %d, B = %d\n", a, b);
}

void add_nums()
{
    int a;
    int b;
    printf("\nEnter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    printf("\nAddition Result: %d\n", a + b);
}

void sub_nums()
{
    int a;
    int b;
    printf("\nEnter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    printf("\nSubtraction Result: %d\n", a - b);
}

void mult_nums()
{
    int a;
    int b;
    printf("\nEnter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    printf("\nMultiplication Result: %d\n", a * b);
}

void div_nums()
{
    int a;
    int b;
    printf("\nEnter First Number (Numerator): ");
    scanf("%d", &a);
    printf("Enter Second Number (Denominator): ");
    scanf("%d", &b);
    if (b != 0)
    {
        printf("\nDivision Result: %.2f\n", (float)a / b);
    }
    else
    {
        printf("\nError: Cannot divide by zero!\n");
    }
}
void check_greater()
{
    int a;
    int b;
    printf("\nEnter First Number (A): ");
    scanf("%d", &a);
    printf("Enter Second Number (B): ");
    scanf("%d", &b);
    if(a>b)
    {
        printf("\n%d is bigger\n", a);
    }
    else
    {
        printf("\n%d is bigger\n", b);
    }
}
