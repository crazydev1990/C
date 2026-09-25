#include<stdio.h>
#include<conio.h>

int main()
{
  int num,first,last,sum=0;
  printf("\n Enter number:");
  scanf("%d",&num);
  last=num%10;
  first = num;
    while (first >= 10) {
        first = first / 10;
    }
  //printf("The first digit is: %d\n", first);
  sum=last+first;
  printf("\n Sum Of 1st & last Digits:%d",sum);
  return 0;
}
