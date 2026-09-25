#include <stdio.h>
#include <string.h>
#include <ctype.h>

void stringReverse(char str[])
{
    printf("Reversed string: %s\n", strrev(str));
}

void checkPalindrome(char str[]) {
    char temp[100];
    strcpy(temp, str);
    strrev(temp);
    if (strcmp(str, temp) == 0) printf("String is Palindrome.\n");
    else printf("String is not Palindrome.\n");
}

void convertToUpper(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) str[i] = toupper(str[i]);
    printf("Uppercase string: %s\n", str);
}

void convertToLower(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) str[i] = tolower(str[i]);
    printf("Lowercase string: %s\n", str);
}

void leftTrim(char str[])
{
    printf("Left trimmed: '%s'\n", str);
}

void rightTrim(char str[]) {
    int end = 0;
    while (str[end] != '\0') end++;
    if (end > 0 && str[end - 1] == ' ') str[end - 1] = '\0';
    printf("Right trimmed: '%s'\n", str);
}

void allTrim(char str[])
{
    printf("All trimmed: '%s'\n", str);
}
void appendString(char str1[]) {
    char str2[100];
    printf("Enter second string to append: ");
    scanf(" %[^\n]s", str2);
    strcat(str1, str2); // સાદો નિયમ: str1 ની પાછળ str2 જોડી દેશે
    printf("Appended string: %s\n", str1);
}

void compareStrings(char str1[]) {
    char str2[100];
    printf("Enter second string to compare: ");
    scanf(" %[^\n]s", str2);
    if (strcmp(str1, str2) == 0) printf("Strings are identical.\n");
    else printf("Strings are different.\n");
}

void copyString(char str1[]) {
    char str2[100];
    strcpy(str2, str1);
    printf("Copied string: %s\n", str2);
}

void countOccurrence(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            count++;
        }
    }
    printf("Character 'a' appears %d times.\n", count);
}

int main() {
    char str[100];
    int choice;
    printf("--- STRING OPERATIONS MENU ---\n");
    printf("1. Reverse  2. Palindrome  3. Upper  4. Lower\n");
    printf("5. L-Trim   6. R-Trim      7. All-Trim\n");
    printf("8. Append   9. Compare     10. Copy  11. Occurrence\n");
    printf("Enter choice (1-11): ");
    scanf("%d", &choice);
    printf("Enter a string: ");
    scanf(" %[^\n]s", str);

    switch(choice) {
        case 1: stringReverse(str); break;
        case 2: checkPalindrome(str); break;
        case 3: convertToUpper(str); break;
        case 4: convertToLower(str); break;
        case 5: leftTrim(str); break;
        case 6: rightTrim(str); break;
        case 7: allTrim(str); break;
        case 8: appendString(str); break;
        case 9: compareStrings(str); break;
        case 10: copyString(str); break;
        case 11: countOccurrence(str); break;
        default: printf("Invalid choice!\n");
    }
    return 0;
}

