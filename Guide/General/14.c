#include<stdio.h>
#include<conio.h>

int main()
{
   int num,count=0;
   printf("Enter Number:");
   scanf("%d",&num);
   for(int i=1;i<=num;i++)
   {
       if(num%i==0){
          count++;
       }
   }
   if(count==2){
      printf("\n %d is Prime Number",num);
   }
   else{
         printf("\n %d is not Prime Number",num);
   }
   return 0;
}
