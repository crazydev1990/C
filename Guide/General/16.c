#include<stdio.h>
#include<conio.h>

int main()
{
  int num,sum=0,i;
  printf("Enter Number:");
  scanf("%d",&num);
  for(i=1;i<num;i++)
  {
      if(num%i==0)
      {
          sum=sum+i;
      }
  }
  if(sum==num)
  {
      printf("\n %d is Perfect Number",num);
  }
  else{
    printf("\n %d is not Perfect Number",num);
  }
  return 0;
}
