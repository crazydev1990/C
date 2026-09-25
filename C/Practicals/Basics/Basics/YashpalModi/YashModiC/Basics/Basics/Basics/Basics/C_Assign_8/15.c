#include<stdio.h>
#include<conio.h>

int main()
{
   int num1,num2,temp,res;
   printf("\n Enter Number1:");
   scanf("%d",&num1);
   printf("\n Enter Number2:");
   scanf("%d",&num2);
   printf("\n Way1 Swapping\n");
   temp=num1;
   num1=num2;
   num2=temp;
   printf("\nNumber1 Value:%d",num1);
   printf("\nNumber2 Value:%d",num2);
   printf("\n Way2 Swapping\n");
   res=(num1*num2);
   num1=res/num1;
   num2=res/num2;
   printf("\nNumber1 Value:%d",num1);
   printf("\nNumber2 Value:%d",num2);
   printf("\n Way3 Swapping\n");
   res=(num1+num2);
   num1=res-num1;
   num2=res-num2;
   printf("\nNumber1 Value:%d",num1);
   printf("\nNumber2 Value:%d",num2);
   printf("\n Way4 Swapping\n");
   num1=num1 ^ num2;
   num2=num1 ^ num2;
   num1=num1 ^ num2;
   printf("\nNumber1 Value:%d",num1);
   printf("\nNumber2 Value:%d",num2);
   return 0;
}
