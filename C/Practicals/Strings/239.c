#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[50];
    printf("\n Enter String:");
    scanf("%s",str);
    printf("\n Entered String:%s",str);
    printf("\n Uppercase String:%s",strupr(str));
    printf("\n Lowercase String:%s",strlwr(str));
    getch();
    return 0;
}
