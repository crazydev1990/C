#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("\n Enter String:\n");
    scanf("%[^\n]s", str);
    strrev(str);
    printf("\n Reversed String: %s", str);
    getch();
    return 0;
}

