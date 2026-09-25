#include <stdio.h>
#include<conio.h>
typedef int number;
typedef char character;
typedef float decimal;
typedef double real;

int main()
{
    number a = 10;
    character ch = 'A';
    decimal price = 10.5;
    real value = 25.55;
    printf("\n%d", a);
    printf("\n%c", ch);
    printf("\n%f", price);
    printf("\n%lf", value);
    return 0;
}
