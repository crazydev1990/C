#include <stdio.h>
#include<conio.h>

int main()
{
    char ch;
    float f;
    printf("Enter character: ");
    scanf("%c", &ch);
    f = (float)ch;
    printf("Character = %c\n", ch);
    printf("Float value = %.2f\n", f);
    return 0;
}
