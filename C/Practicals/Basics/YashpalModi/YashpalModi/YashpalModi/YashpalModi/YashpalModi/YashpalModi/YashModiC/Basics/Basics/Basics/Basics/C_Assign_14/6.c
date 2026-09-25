#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
    char str[100];
    int i;
    int alphabets = 0, digits = 0, special = 0;
    printf("\n Enter String:\n");
    scanf("%[^\n]s", str);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(isalpha(str[i]))
        {
            alphabets = alphabets + 1;
        }
        else if(isdigit(str[i]))
        {
            digits = digits + 1;
        }
        else
        {
            special = special + 1;
        }
    }
    printf("\n Alphabets: %d", alphabets);
    printf("\n Digits: %d", digits);
    printf("\n Special Characters: %d", special);
    getch();
    return 0;
}

