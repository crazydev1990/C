#include <stdio.h>

int main() {
    int rows = 5; // ગ્લાસની ઉંચાઈ

    // ૧. ગ્લાસનો ઉપરનો ભાગ
    for (int i = rows; i >= 1; i--) {
        for (int j = rows; j > i; j--) printf(" ");  // સ્પેસ માટે
        for (int k = 1; k <= (2 * i - 1); k++) printf("*"); // સ્ટાર માટે
        printf("\n");
    }

    // ૨. ગ્લાસની નીચેની દાંડી અને સ્ટેન્ડ
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j < rows; j++) printf(" "); // સેન્ટર લાવવા સ્પેસ
        printf("*\n"); // દાંડી
    }

    for (int j = 1; j < rows - 1; j++) printf(" ");
    printf("***\n"); // નીચેનું સ્ટેન્ડ

    return 0;
}

