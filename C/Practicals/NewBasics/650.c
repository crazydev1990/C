
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    //clrscr();
    int date,month,year;
    printf("\n Enter Date in DD/MM/YYYY:");
    scanf("%d/%d/%d",&date,&month,&year);
    printf("Day-%02d,Month-%02d,Year-%04d",date,month,year);
    getch();
}







