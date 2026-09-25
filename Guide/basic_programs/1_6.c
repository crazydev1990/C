#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    //clrscr();
    char name[50];
    printf("Enter Name:");
    scanf("%[^\n]",&name);//read all except space
    printf("\"Hello, %s\"\n",name);
    getch();
}





