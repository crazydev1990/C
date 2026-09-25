#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void calculateAddition(int arr1[], int arr2[]);
void calculateSubtraction(int arr1[], int arr2[]);
void calculateMultiplication(int arr1[], int arr2[]);
void calculateDivision(int arr1[], int arr2[]);

int main()
{
    int arr1[9], arr2[9];
    int choice;
    printf("Enter 9 numbers for First Matrix:\n");
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter 9 numbers for Second Matrix:\n");
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("\n--- MATRIX OPERATIONS MENU ---");
    printf("\n1. Matrix Addition");
    printf("\n2. Matrix Subtraction");
    printf("\n3. Matrix Multiplication");
    printf("\n4. Matrix Division");
    printf("\n5. Exit");
    printf("\n\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            calculateAddition(arr1, arr2);
            break;
        case 2:
            calculateSubtraction(arr1, arr2);
            break;
        case 3:
            calculateMultiplication(arr1, arr2);
            break;
        case 4:
            calculateDivision(arr1, arr2);
            break;
        case 5:
            exit(0);
        default:
            printf("\nInvalid Choice Selection!\n");
    }

    return 0;
}

void calculateAddition(int arr1[], int arr2[])
{
    int add_res[9];
    int count = 0;
    for (int i = 0; i < 9; i++)
    {
        add_res[i] = arr1[i] + arr2[i];
    }
    printf("\n--- Resulting Addition Matrix ---\n");
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", add_res[i]);
        count = count + 1;
        if (count == 3)
        {
            printf("\n");
            count = 0;
        }
    }
}

void calculateSubtraction(int arr1[], int arr2[])
{
    int sub_res[9];
    int count = 0;
    for (int i = 0; i < 9; i++)
    {
        sub_res[i] = arr1[i] - arr2[i];
    }
    printf("\n--- Resulting Subtraction Matrix ---\n");
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", sub_res[i]);
        count = count + 1;
        if (count == 3)
        {
            printf("\n");
            count = 0;
        }
    }
}

void calculateMultiplication(int arr1[], int arr2[])
{
    int mult_res[9];
    int count = 0;
    for (int i = 0; i < 9; i++)
    {
        mult_res[i] = arr1[i] * arr2[i];
    }
    printf("\n--- Resulting Multiplication Matrix ---\n");
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", mult_res[i]);
        count = count + 1;
        if (count == 3)
        {
            printf("\n");
            count = 0;
        }
    }
}

void calculateDivision(int arr1[], int arr2[])
{
    float div_res[9];
    int count = 0;
    for (int i = 0; i < 9; i++)
    {
        if (arr2[i] != 0)
        {
            div_res[i] = (float)arr1[i] / arr2[i];
        }
        else
        {
            div_res[i] = 0.0;
        }
    }
    printf("\n--- Resulting Division Matrix ---\n");
    for (int i = 0; i < 9; i++)
    {
        printf("%.2f ", div_res[i]);
        count = count + 1;
        if (count == 3)
        {
            printf("\n");
            count = 0;
        }
    }
}

