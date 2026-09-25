#include <stdio.h>
#include<conio.h>

int main() {
    int current_number, check_factor, divisors;
    int even_count = 0, odd_count = 0, prime_count = 0;
    printf("First 10 Even : ");
    current_number = 1;
    while (even_count < 10) {
        if (current_number % 2 == 0) {
            printf("%d ", current_number);
            even_count++;
        }
        current_number++;
    }
    printf("\nFirst 10 Odd  : ");
    current_number = 1;
    while (odd_count < 10) {
        if (current_number % 2 != 0) {
            printf("%d ", current_number);
            odd_count++;
        }
        current_number++;
    }
    printf("\nFirst 10 Prime: ");
    current_number = 1;
    while (prime_count < 10) {
        divisors = 0;
        check_factor = 1;
        while (check_factor <= current_number) {
            if (current_number % check_factor == 0) {
                divisors++;
            }
            check_factor++;
        }
        if (divisors == 2) {
            printf("%d ", current_number);
            prime_count++;
        }
        current_number++;
    }
    printf("\n");
    return 0;
}
