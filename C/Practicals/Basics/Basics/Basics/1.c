#include <stdio.h>
#include <string.h>

void countLength(char []);
void countVowels(char []);
void countWords(char []);
void countSpecificWord();
void countTypesOfChars(char []);

int main()
{
    char str[100];
    int choice;
    printf("\n--- STRING OPERATIONS MENU ---");
    printf("\n1. Count String Length");
    printf("\n2. Count Vowels (A, E, I, O, U)");
    printf("\n3. Count Total Words");
    printf("\n4. Count Specific Word");
    printf("\n5. Count Capital, Small and Special Characters");
    printf("\nEnter your choice (1-5): ");
    scanf("%d", &choice);

    if(choice != 4 && choice >= 1 && choice <= 5)
    {
        printf("Enter a string (sentence): ");
        scanf(" %[^\n]s", str);
    }

    switch(choice)
    {
        case 1:
            countLength(str);
            break;
        case 2:
            countVowels(str);
            break;
        case 3:
            countWords(str);
            break;
        case 4:
            countSpecificWord();
            break;
        case 5:
            countTypesOfChars(str);
            break;
        default:
            printf("\nInvalid choice! Please select between 1 and 5.\n");
    }
    return 0;
}
void countLength(char str[])
{
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    printf("\nTotal Length of String: %d\n", length);
}

void countVowels(char str[])
{
    int vowels = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
            vowels++;
        }
    }
    printf("\nTotal Vowels count: %d\n", vowels);
}

void countWords(char str[])
{
    int words = 0;
    if (str[0] != '\0') {
        words = 1;
        for(int i = 0; str[i] != '\0'; i++) {
            if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
                words++;
            }
        }
    }
    printf("\nTotal Words count: %d\n", words);
}

void countSpecificWord()
{
    char word[20];
    char target_word[20];
    int word_count = 0;
    int total_words, i;
    printf("\nHow many words are there in your sentence?: ");
    scanf("%d", &total_words);
    printf("\nEnter the specific word to search: ");
    scanf("%s", target_word);
    printf("\nNow type your sentence: ");
    for(i = 0; i < total_words; i++) {
        scanf("%s", word);
        if(strcmp(word, target_word) == 0) {
            word_count++;
        }
    }
    printf("Word '%s' appears %d times.\n", target_word, word_count);
}

void countTypesOfChars(char str[])
{
    int capital = 0, small = 0, special = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            capital++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            small++;
        }
        else
        {
            special++;
        }
    }
    printf("\nCapital Letters: %d", capital);
    printf("\nSmall Letters: %d", small);
    printf("\nSpecial Characters / Spaces: %d\n", special);
}

