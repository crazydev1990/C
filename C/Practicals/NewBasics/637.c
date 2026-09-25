#include<stdio.h>
#include<conio.h>

int main()
{
  int a=5,b=6,sum=0,flag;
  a=a+1;
  b=b+1;
  sum=a+b;
  flag=a>b?1:0;
  a++;
  ++b;
  printf("\n Value of a :%d",a);
  printf("\n Value of b :%d",b);
  printf("\n Value of sum :%d",sum);
  printf("\n Value of flag :%d",flag);
  return 0;
}
