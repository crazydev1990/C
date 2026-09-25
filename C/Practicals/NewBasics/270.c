#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

int main()
{
   char ch='A',digit='6';
   int num;
   float num1;
   double num2;
   bool num3;
   num=(int)ch;
   printf("\nCharacter Casted To Integer:%d",num);
   num=digit-'0';
   printf("\nCharacter Casted To Integer:%d",num);
   num1=(float)ch;
   printf("\nCharacter Casted To float:%f",num1);
   num2=(double)ch;
   printf("\nCharacter Casted To Double:%lf",num2);
   num3=(bool)ch;
   printf("\nCharacter Casted To Boolean:%d",num3);
   return 0;
}
