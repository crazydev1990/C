#include <stdio.h>

int main() {
    int head = 4;    // તીરની અણીની સાઈઝ
    int shaft = 10;  // તીરની દાંડીની લંબાઈ

    // ભાગ ૧: તીરની આગળની અણી (Arrowhead) - સેન્ટર અલાઈનમેન્ટ સાથે
    for (int i = 1; i <= head; i++) {
        // અણીની આગળ સ્પેસ છોડવા માટે
        for (int j = 1; j <= head - i; j++) {
            printf(" ");
        }
        // અણીનો ત્રિકોણ
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // ભાગ ૨: તીરની સીધી દાંડી અને પાછળના પીંછા (Shaft & Fletching)
    for (int i = 1; i <= shaft; i++) {

        // પાછળના ભાગમાં પીંછા (Fletching) માટે ગેપ અને સ્ટાર
        if (i >= shaft - 2) {
            for (int j = 1; j <= head - 2; j++) {
                printf(" ");
            }
            printf("***\n"); // એકદમ સેન્ટરમાં પીંછા પ્રિન્ટ થશે
        }
        // વચ્ચેની સીધી દાંડી માટે
        else {
            for (int j = 1; j <= head - 1; j++) {
                printf(" ");
            }
            printf("*\n");   // એકદમ સેન્ટરમાં સિંગલ દાંડી
        }
    }

    return 0;
}
