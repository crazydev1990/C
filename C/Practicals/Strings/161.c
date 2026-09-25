#include <stdio.h>
#include<conio.h>

int main()
{
    int i, j;
    char ch;
    for(i=0; i<=5; i++)
    {
        ch = 'A';
        for(j=0; j<=9; j++)
        {
            if(j>=6-i && j<=4+i)
            {
                printf("%c", ch);

                if(j < 5)
                    ch++;
                else
                    ch--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
