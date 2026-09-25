#include <stdio.h>

int main() {
    int r = 8; // ચંદ્રની ત્રિજ્યા (Radius)

    // X અને Y અક્ષના કો-ઓર્ડિનેટ્સની મદદથી પરફેક્ટ રાઉન્ડ વળાંક
    for (int i = -r; i <= r; i++) {
        for (int j = -r; j <= r + 4; j++) {
            // બહારના વર્તુળનું સમીકરણ
            int outer = i * i + j * j;
            // અંદરના વર્તુળનું સમીકરણ (જે ભાગ કાપીને ચંદ્રનો શેપ આપશે)
            int inner = i * i + (j - 3) * (j - 3);

            // કન્ડિશન ચેક કરીને સ્ટાર પ્રિન્ટ કરવા
            if (outer <= r * r && inner > (r - 2) * (r - 2)) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
