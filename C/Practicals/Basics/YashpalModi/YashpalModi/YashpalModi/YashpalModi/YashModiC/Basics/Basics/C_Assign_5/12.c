#include <stdio.h>
#include<conio.h>

int main() {
    int num, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 0; i <= 9; i++) {
        int count = 0;
        temp = num;
        while (temp > 0) {
            if (temp % 10 == i) {
                count++;
            }
            temp = temp / 10;
        }
        if (count > 1) {
            printf("Digit %d repeated %d times\n", i, count);
        }
    }
    return 0;
}
