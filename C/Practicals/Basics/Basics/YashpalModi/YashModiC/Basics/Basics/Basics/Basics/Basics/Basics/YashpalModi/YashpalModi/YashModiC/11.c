#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("\n Enter Character:");
    scanf("%c",&ch);

    if(ch=='A' || ch=='a')
    {
        printf("\n %c is Vowel",ch);
    }
    else if(ch=='E' || ch=='e')
    {
        printf("\n %c is Vowel",ch);
    }
    else if(ch=='I' || ch=='i')
    {
       printf("\n %c is Vowel",ch);
    }
    else if(ch=='O' || ch=='o')
    {
        printf("\n %c is Vowel",ch);
    }
    else if(ch=='U' || ch=='u')
    {
        printf("\n %c is Vowel",ch);
    }
    else
    {
        printf("\n %c is Constant",ch);
    }
}
