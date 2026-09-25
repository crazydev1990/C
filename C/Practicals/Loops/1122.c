#include <stdio.h>
#include<conio.h>

int main() {
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int k = i; k < n - 1; k++) {
            printf("   ");
        }
        for (int j = -i; j <= i; j++) {
            printf("%3d", j);
        }
        printf("\n");
    }
    return 0;
}
