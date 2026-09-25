#include <stdio.h>
#include <string.h>

int main()
{
    char words[10][20];
    char target[20], new_word[20];
    int choice, total, i, pos;
    printf("How many words in sentence?: ");
    scanf("%d", &total);
    printf("Enter sentence word by word:\n");
    for(i = 1; i <= total; i++) {
        scanf("%s", words[i]);
    }
    printf("\n1.Insert 2.Find 3.Replace 4.Delete\nEnter choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter new word and position: ");
            scanf("%s %d", new_word, &pos);
            printf("Result: ");
            for(i = 1; i <= total; i++) {
                if(i == pos) {
                    printf("%s ", new_word);
                }
                printf("%s ", words[i]);
            }
            if(pos > total) {
                printf("%s ", new_word);
            }
            break;
        case 2:
            printf("Enter word to find: ");
            scanf("%s", target);
            for(i = 1; i <= total; i++) {
                if(strcmp(words[i], target) == 0) {
                    printf("Found at position: %d\n", i);
                }
            }
            break;
        case 3:
            printf("Enter word to replace and new word: ");
            scanf("%s %s", target, new_word);
            printf("Result: ");
            for(i = 1; i <= total; i++) {
                if(strcmp(words[i], target) == 0) {
                    strcpy(words[i], new_word);
                }
                printf("%s ", words[i]);
            }
            break;
        case 4:
            printf("Enter word to delete: ");
            scanf("%s", target);
            printf("Result: ");
            for(i = 1; i <= total; i++) {
                if(strcmp(words[i], target) != 0) {
                    printf("%s ", words[i]);
                }
            }
            break;
        default:
            printf("Invalid choice!");
    }
    printf("\n");
    return 0;
}

