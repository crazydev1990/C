#include<stdio.h>
#include<conio.h>

int main()
{
   int num,sum=0,lastDigit;
   printf("Enter Num:");
   scanf("%d",&num);
   while(num >0){
     lastDigit=num%10;
     sum=sum+lastDigit;
     num=num/10;
   }
   printf("\n Sum of Digits is:%d",sum);
   return 0;
}
