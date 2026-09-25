#include <stdio.h>

int main() {
    int height = 6; // કુંડાની ઉંચાઈ બદલવા માટે
    int width = 16; // કુંડાની ઉપરની પહોળાઈ

    // ભાગ ૧: કુંડાની ઉપરની કિનારી (Top Border/Rim)
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < width; j++) {
            printf("*");
        }
        printf("\n");
    }

    // ભાગ ૨: કુંડાનો મુખ્ય ભાગ જે નીચે જતાં સાંકડો થાય છે (Slanted Body)
    for (int i = 1; i <= height; i++) {
        // ડાબી બાજુથી સ્પેસ વધારવા માટે જેથી કુંડું અંદર તરફ નમે
        for (int j = 1; j <= i; j++) {
            printf(" ");
        }

        // કુંડાની દીવાલ અને અંદરની ખાલી જગ્યા
        for (int k = 1; k <= (width - 2 * i); k++) {
            // માત્ર બોર્ડર પ્રિન્ટ કરવા માટે
            if (k == 1 || k == (width - 2 * i) || i == height) {
                printf("*");
            } else {
                printf(" "); // અંદરની ખાલી જગ્યા
            }
        }
        printf("\n");
    }

    return 0;
}

