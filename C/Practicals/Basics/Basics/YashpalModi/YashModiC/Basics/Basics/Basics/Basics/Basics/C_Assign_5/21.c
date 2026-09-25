#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Enter Num:");
    scanf("%d",&num);
    if(num%2==0){
      printf("\n %d is Even Number",num);
    }else{
      printf("\n %d is Odd Number",num);
    }
    if((num/2)*2==num)
    {
        printf("\n %d is Even",num);
    }else{
      printf("\n %d is Odd",num);
    }
    return 0;
}
