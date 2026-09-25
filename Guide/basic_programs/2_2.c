#include<stdio.h>
#include<conio.h>

void main()
{
  int num,lastDigit;
  //clrscr();
  printf("\n Enter Number:");
  scanf("%d",&num);
  printf("\n Entered Number is:%d",num);
  num=num/10;
  lastDigit=num;
  printf("\n Number Without Last Digit is:%d",lastDigit);
  getch();
}

