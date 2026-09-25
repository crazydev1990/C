#include<stdio.h>
#include<conio.h>

int main()
{
    char str[100],ch;
    int i,count=0;
    printf("\n Enter String:\n");
    scanf("%s",str);
    printf("\n Enter Character:\n");
    scanf(" %c",&ch);
    for(i=0;str[i] != '\0';i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    printf("\nCharacter '%c' appears %d times", ch, count);
    getch();
    return 0;
}
