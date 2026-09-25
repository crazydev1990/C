#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str1[20],str2[20];
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("\nYou entered: %s", str1);
    printf("\nEnter a string: ");
    fgets(str2, sizeof(str2), stdin);
    printf("\nYou entered: %s", str2);
    strcpy(str2,str1);
    printf("\nYou entered: %s", str1);
    printf("\nYou entered: %s", str2);
    getch();
    return 0;
}
