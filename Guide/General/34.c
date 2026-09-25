#include <stdio.h>
#include<conio.h>

int main() {
    int n, i = 1, count = 1, sum = 0;
    printf("Enter how many odd numbers (N): ");
    scanf("%d", &n);
    while (count <= n) {
        sum = sum + i;
        i = i + 2;
        count++;
    }
    printf("Sum of first %d odd numbers = %d\n", n, sum);
    return 0;
}
