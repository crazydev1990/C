#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    int count = 0, count1 = 0;
    printf("Enter a string: ");
    scanf(" %[^\n]s", str);
    printf("Enter the character to count: ");
    scanf(" %c", &ch);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("\nCharacter '%c' appears %d times.\n", ch, count);
    printf("\nCount of each character in string:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '0') {
            continue;
        }
        char chh = str[i];
        count1 = 0;
        for (int j = 0; str[j] != '\0'; j++) {
            if (str[j] == chh) {
                count1++;
                str[j] = '0';
            }
        }
        printf("  '%c' -> %d times\n", chh, count1);
    }
    return 0;
}
