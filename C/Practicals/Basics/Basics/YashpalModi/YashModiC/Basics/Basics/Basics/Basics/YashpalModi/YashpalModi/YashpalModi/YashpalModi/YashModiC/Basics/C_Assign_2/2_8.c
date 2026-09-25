#include<stdio.h>
#include<conio.h>

void main()
{
  char ch='A';
  int num=123;
  float num1=125.36;
  double num2=45.23;
  int size_int=(int)sizeof(num);
  int size_ch=(int)sizeof(ch);
  int size_float=(int)sizeof(num1);
  int size_double=(int)sizeof(num2);
  printf("\n Size Of Int Type Variable is:%d bytes",size_int);
  printf("\n Size Of Float Type Variable is:%d bytes",size_float);
  printf("\n Size Of Double Type Variable is:%d bytes",size_double);
  printf("\n Size Of Char Type Variable is:%d bytes",size_ch);
  getch();
}





