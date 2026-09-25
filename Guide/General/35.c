#include<stdio.h>
#include<conio.h>

int main() {
    int n, num = 2, prime_count = 0, sum = 0;
    printf("Enter how many prime numbers (N): ");
    scanf("%d", &n);
    while (prime_count < n) {
        int is_prime = 1;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1) {
            sum += num;
            prime_count++;
        }
        num++;
    }
    printf("Sum of first %d prime numbers = %d\n", n, sum);
    return 0;
}
