#include<stdio.h>
#include<conio.h>

int main()
{
    char str[100];
    int i,count=0;
    printf("\n Enter String:\n");
    scanf("%[^\n]s",str);
    for(i=0;str[i] != '\0';i++)
    {
        switch(str[i])
        {
            case 'A':
                         count=count+1;
                         break;
            case 'a':
                       count=count+1;
                         break;
            case 'E':
                       count=count+1;
                         break;
            case 'e':
                       count=count+1;
                         break;
            case 'I':
                      count=count+1;
                         break;
            case 'i':
                      count=count+1;
                         break;
            case 'O':
                      count=count+1;
                         break;
            case 'o':
                       count=count+1;
                         break;
            case 'U':
                       count=count+1;
                         break;
            case 'u':
                         count=count+1;
                         break;
            default:
                //printf("\n No Vowels,count:%d",count);
        }
    }
    printf("\n Vowel Count:%d",count);
    getch();
    return 0;
}

