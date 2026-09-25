#include<stdio.h>
#include<conio.h>

int main()
{
   int num;
   printf("Enter Number:");
   scanf("%d",&num);
   if(num%9==1 && num >0)
   {
     printf("\n %d is Magic Number",num);
   }
   else{
    printf("\n %d is not Magic Number",num);
   }
   return 0;
}
