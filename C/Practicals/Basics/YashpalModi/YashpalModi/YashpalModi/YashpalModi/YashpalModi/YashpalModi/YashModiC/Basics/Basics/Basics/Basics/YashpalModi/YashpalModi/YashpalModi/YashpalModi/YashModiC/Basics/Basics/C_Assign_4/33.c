#include<stdio.h>
#include<conio.h>

int main() {
    int n, i = 2, count = 1, sum = 0;
    printf("Enter how many even numbers (N): ");
    scanf("%d", &n);
    while (count <= n) {
        sum += i;
        i += 2;
        count++;
    }
    printf("Sum of first %d even numbers = %d\n", n, sum);
    return 0;
}
