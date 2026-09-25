#include <stdio.h>

void printSwastik(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Check conditions for printing star
            if (i == n / 2 || j == n / 2 ||
                (i == 0 && j > n / 2) ||
                (i == n - 1 && j < n / 2) ||
                (j == 0 && i < n / 2) ||
                (j == n - 1 && i > n / 2)) {
                printf("* ");
            } else {
                printf("  "); // Print spaces
            }
        }
        printf("\n");
    }
}

int main() {
    int n = 7; // Use an odd number for a symmetric pattern
    printSwastik(n);
    return 0;
}
