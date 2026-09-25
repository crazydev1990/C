#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findChar(char str[]) {
    char ch;
    int found = 0;
    printf("\nEnter character to find: ");
    scanf(" %c", &ch);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            printf("Character '%c' found at position: %d\n", ch, i + 1);
            found = 1;
        }
    }
    if(found == 0) {
        printf("Character '%c' not found.\n", ch);
    }
}

void replaceChar(char str[]) {
    char old_ch, new_ch;
    printf("\nEnter character to replace: ");
    scanf(" %c", &old_ch);
    printf("Enter new character: ");
    scanf(" %c", &new_ch);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == old_ch) {
            str[i] = new_ch;
        }
    }
    printf("Updated string: %s\n", str);
}

void deleteChar(char str[])
{
    char ch;
    printf("\nEnter character to delete: ");
    scanf(" %c", &ch);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            for(int j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
    printf("Updated string: %s\n", str);
}

void toggleCase(char str[])
{
    for(int i = 0; str[i] != '\0'; i++) {
        if(isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        else if(islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }
    printf("Toggled string: %s\n", str);
}

void countCharAppearance(char str[])
{
    char ch;
    int count = 0;
    printf("\nEnter character to count: ");
    scanf(" %c", &ch);
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch) {
            count++;
        }
    }
    printf("Character '%c' appears %d times.\n", ch, count);
}

int main() {
    char str[100];
    int choice;
    printf("Enter a string: ");
    scanf(" %[^\n]s", str);
    printf("\n--- STRING OPERATIONS MENU ---");
    printf("\n1. Find Character Position");
    printf("\n2. Replace Character");
    printf("\n3. Delete Character");
    printf("\n4. Toggle Case (Capital <-> Small)");
    printf("\n5. Count Character Appearance");
    printf("\nEnter your choice (1-5): ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            findChar(str);
            break;
        case 2:
            replaceChar(str);
            break;
        case 3:
            deleteChar(str);
            break;
        case 4:
            toggleCase(str);
            break;
        case 5:
            countCharAppearance(str);
            break;
        default:
            printf("\nInvalid choice! Please select between 1 and 5.\n");
    }
    return 0;
}
