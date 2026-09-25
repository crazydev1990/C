#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("Enter char:");
    scanf("%c",&ch);
    switch(ch)
    {
       case 'A':
       case 'a':
                 printf("%c is Vowel",ch);
                 break;
       case 'E':
       case 'e':
                 printf("%c is Vowel",ch);
                 break;
       case 'I':
       case 'i':
                 printf("%c is Vowel",ch);
                 break;
       case 'O':
       case 'o':
                 printf("%c is Vowel",ch);
                 break;
       case 'U':
       case 'u':
                 printf("%c is Vowel",ch);
                 break;
       default:
                printf("%c is constant",ch);
    }
}
