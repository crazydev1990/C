#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void calculateSquare(int n);
void calculateCube(int n);
void calculateSquareRoot(int n);

int main()
{
    int n, choice;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\n--- MENU ---");
    printf("\n1. Find Square");
    printf("\n2. Find Cube");
    printf("\n3. Find Square Root");
    printf("\n4. Exit");
    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            calculateSquare(n);
            break;
        case 2:
            calculateCube(n);
            break;
        case 3:
            calculateSquareRoot(n);
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid Choice!\n");
    }
    return 0;
}

void calculateSquare(int n)
{
    int square = n * n;
    printf("\nSquare of %d is: %d\n", n, square);
}

void calculateCube(int n)
{
    int cube = n * n * n;
    printf("\nCube of %d is: %d\n", n, cube);
}

void calculateSquareRoot(int n)
{
    if (n < 0)
    {
        printf("\nSquare root of negative numbers is not real!\n");
    }
    else
    {
        float root = sqrt(n);
        printf("\nSquare Root of %d is: %.2f\n", n, root);
    }
}

