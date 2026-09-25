#include <stdio.h>
#include <conio.h>

void check_rainbow_color(char ch)
{
    switch (ch)
    {
        case 'V':
        case 'v':
            printf("\nYES! It is Violet color in Rainbow.\n");
            break;

        case 'I':
        case 'i':
            printf("\nYES! It is Indigo color in Rainbow.\n");
            break;

        case 'B':
        case 'b':
            printf("\nYES! It is Blue color in Rainbow.\n");
            break;

        case 'G':
        case 'g':
            printf("\nYES! It is Green color in Rainbow.\n");
            break;

        case 'Y':
        case 'y':
            printf("\nYES! It is Yellow color in Rainbow.\n");
            break;

        case 'O':
        case 'o':
            printf("\nYES! It is Orange color in Rainbow.\n");
            break;

        case 'R':
        case 'r':
            printf("\nYES! It is Red color in Rainbow.\n");
            break;

        default:
            printf("\nNO! This color does not exist in Rainbow.\n");
    }
}

int main()
{
    char color_char;
    printf("Enter first character of color (V, I, B, G, Y, O, R): ");
    scanf("%c", &color_char);
    check_rainbow_color(color_char);
    return 0;
}

