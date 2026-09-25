#include<stdio.h>
#include<conio.h>

int main() {
    int n, i = 1, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    while (i <= n) {
        sum = sum + i;
        i++;
    }
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}
