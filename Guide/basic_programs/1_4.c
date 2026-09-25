#include<stdio.h>
#include<conio.h>,

void main()
{
    //clrscr();
    float pi,r,A;
    printf("\n Enter Value Of PI:");
    scanf("%f",&pi);
    printf("\n Enter Value Of Radius:");
    scanf("%f",&r);
    A=pi*(r*r);
    printf("\n Area Of Circle is:%f Having Radius:%f",A,r);
    getch();
}



