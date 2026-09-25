#include <stdio.h>
#include <conio.h>

int main() {
    int start, end;
    int even_count = 0, odd_count = 0, prime_count = 0;
    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);
    while (start <= end) {
        if (start % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
        int divisors = 0;
        int check_factor = 1;

        while (check_factor <= start) {
            if (start % check_factor == 0) {
                divisors++;
            }
            check_factor++;
        }
        if (divisors == 2) {
            prime_count++;
        }
        start++;
    }
    printf("\nTotal Even Numbers : %d\n", even_count);
    printf("Total Odd Numbers  : %d\n", odd_count);
    printf("Total Prime Numbers: %d\n", prime_count);
    return 0;
}
