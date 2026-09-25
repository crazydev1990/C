#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdbool.h>

int main()
{
    char ch;
    printf("\n Enter Character:");
    scanf("%c",&ch);
    bool isAlpha=isalpha(ch);
    bool isDigit=isdigit(ch);
    if(isAlpha==1){
        printf("\n %c is Alphabet",ch);
    }else if(isDigit==1){
      printf("\n %c is Digit",ch);
    }else{
      printf("\n %c is Symbol",ch);
    }
    return 0;
}
