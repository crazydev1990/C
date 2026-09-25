#include<stdio.h>
#include<conio.h>


int main()
{
    char str[100], ch;
    int i, count;
    printf("\n Enter String:\n");
    scanf("%[^\n]s", str);

    for(ch = 'a'; ch <= 'z'; ch++)
    {
        count = 0;
        for(i = 0; str[i] != '\0'; i++)
        {
            if(str[i] == ch)
            {
                count = count + 1;
            }
        }
        if(count > 0)
        {
            printf(" %c = %d times\n", ch, count);
        }
    }

    for(ch = 'A'; ch <= 'Z'; ch++)
    {
        count = 0;
        for(i = 0; str[i] != '\0'; i++)
        {
            if(str[i] == ch)
            {
                count = count + 1;
            }
        }
        if(count > 0)
        {
            printf(" %c = %d times\n", ch, count);
        }
    }

    getch();
    return 0;
}
