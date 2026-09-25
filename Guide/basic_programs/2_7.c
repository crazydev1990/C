#include<stdio.h>
#include<conio.h>

void main()
{
  float inr,usd;
  float rate=76.23;
  printf("\n Enter INR:");
  scanf("%f",&inr);
  usd=inr/rate;
  printf("\n USD value is: %f",usd);
  getch();
}




