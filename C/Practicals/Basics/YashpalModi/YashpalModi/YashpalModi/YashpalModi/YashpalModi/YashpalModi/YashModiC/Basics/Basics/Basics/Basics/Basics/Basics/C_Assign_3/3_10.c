#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main(){
char ch;
printf("\nEnter Char:");
scanf("%c",&ch);
if(isupper(ch)){
    printf("%c is Uppercase",ch);
}
else if(islower(ch)){
   printf("%c is Lowercase",ch);
}
getch();
}
