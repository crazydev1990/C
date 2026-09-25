#include<stdio.h>
#include<conio.h>

void main()
{
  int num;
  int sum=0;
  printf("\n Enter Number:");
  scanf("%d",&num);
  while(num > 0){
    sum=sum+(num%10);
    num=num/10;
  }
  printf("sum of digit:%d",sum);
  getch();
}



