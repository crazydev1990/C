#include <stdio.h>
#include <string.h>

int main() {
    char str1[20], str2[20];
    int choice;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    printf("\n1. Case-Sensitive Compare\n2. Case-Insensitive Compare\nEnter choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            if(strcmp(str1, str2) == 0) printf("Strings are Equal\n");
            else printf("Strings are Not Equal\n");
            break;
        case 2:
            if(strcasecmp(str1, str2) == 0) printf("Strings are Equal\n");
            else printf("Strings are Not Equal\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}

