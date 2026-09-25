#include<stdio.h>
#include<conio.h>

void main()
{
  int num1,num2,temp;
  printf("\n Enter Num1:");
  scanf("%d",&num1);
  printf("\n Enter Num2:");
  scanf("%d",&num2);
  printf("\n Before Swap num1 is:%d ,num2 is:%d",num1,num2);
  temp=num1;
  num1=num2;
  num2=temp;
  printf("\n After Swap num1 is:%d ,num2 is:%d",num1,num2);
  getch();
}

