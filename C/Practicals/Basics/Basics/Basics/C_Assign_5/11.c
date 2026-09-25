#include <stdio.h>

int main() {
    int num, temp, digit;
    int prime_count = 0, non_prime_count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        int divisors = 0;
        for (int i = 1; i <= digit; i++) {
            if (digit % i == 0) {
                divisors++;
            }
        }
        if (divisors == 2) {
            prime_count++;
        } else {
            non_prime_count++;
        }
        temp = temp/10;
    }
    printf("Total Prime Digits: %d\n", prime_count);
    printf("Total Non-Prime Digits: %d\n", non_prime_count);
    return 0;
}
