#include <stdio.h>

int main() {
    int n = 4; // દિવાની સાઈઝ

    // ૧. જ્યોત (Flame)
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) printf(" ");  // સ્પેસ માટે
        for (int k = 1; k <= (2 * i - 1); k++) printf("*"); // સ્ટાર માટે
        printf("\n");
    }

    // ૨. કોડિયું (Diya Base)
    for (int i = n; i >= 1; i--) {
        for (int j = n; j > i; j--) printf(" ");  // સ્પેસ માટે
        for (int k = 1; k <= (2 * i - 1); k++) printf("*"); // સ્ટાર માટે
        printf("\n");
    }

    return 0;
}
