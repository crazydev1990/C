#include <stdio.h>
#include<conio.h>
#include <stdbool.h>
int main()
{
    printf("bool   = %zu bytes\n", sizeof(bool));
    printf("char   = %zu bytes\n", sizeof(char));
    printf("int    = %zu bytes\n", sizeof(int));
    printf("float  = %zu bytes\n", sizeof(float));
    printf("double = %zu bytes\n", sizeof(double));
    return 0;
}
