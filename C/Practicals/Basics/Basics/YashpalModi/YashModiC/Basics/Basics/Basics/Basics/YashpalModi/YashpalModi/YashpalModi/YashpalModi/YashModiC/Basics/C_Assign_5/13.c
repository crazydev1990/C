#include <stdio.h>
#include <conio.h>
int main() {
    int num, temp;
    int max_digit = -1;
    int min_digit=10;
    int mxcount = 0;
    int mncount=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit > max_digit) {
            max_digit = digit;
        }
        if (digit < min_digit) {
            min_digit = digit;
        }
        temp = temp/10;
    }
    temp = num;
    while (temp > 0) {
        if (temp % 10 == max_digit) {
            mxcount++;
        }
        if (temp %10 == min_digit) {
            mncount++;
        }
        temp = temp/10;
    }
    printf("Max digit is %d and it appears %d times.\n", max_digit, mxcount);
    printf("Min digit is %d and it appears %d times.\n", min_digit, mncount);
    return 0;
}
