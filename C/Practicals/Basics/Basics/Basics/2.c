#include <stdio.h>

void printASCII(char str[])
{
    printf("\nCharacter -> ASCII Code\n");
    printf("-----------------------\n");
    for(int i = 0; str[i] != '\0'; i++)
    {
        printf("   '%c'    <->    %d\n", str[i], str[i]);
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]s", str);
    printASCII(str);
    return 0;
}

