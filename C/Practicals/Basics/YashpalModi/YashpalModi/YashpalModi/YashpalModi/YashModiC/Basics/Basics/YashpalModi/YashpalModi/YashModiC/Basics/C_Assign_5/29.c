#include <stdio.h>
#include<conio.h>

int main() {
    int current, factor, divisors;
    printf("Even (Reverse) : ");
    current = 20;
    while (current >= 2) {
        printf("%d ", current);
        current = current - 2;
    }
    printf("\nOdd (Reverse)  : ");
    current = 19;
    while (current >= 1) {
        printf("%d ", current);
        current = current - 2;
    }
    printf("\nPrime (Reverse): ");
    current = 30;
    while (current >= 2) {
        divisors = 0;
        factor = 1;
        while (factor <= current) {
            if (current % factor == 0) {
                divisors++;
            }
            factor++;
        }
        if (divisors == 2) {
            printf("%d ", current);
        }
        current--;
    }
    printf("\n");
    return 0;
}
