#include<stdio.h>
#include<conio.h>

int findFact(int);

int main()
{
   int num,k;
   printf("\n Enter Number:");
   scanf("%d",&num);
   k=findFact(num);
   printf("Factorial of %d is %d",num,k);
   return 0;
}
int findFact(int num)
{
    int fact=1;
    while(num>0)
    {
        fact=fact*num;
        num=num-1;
    }
    return fact;
}
