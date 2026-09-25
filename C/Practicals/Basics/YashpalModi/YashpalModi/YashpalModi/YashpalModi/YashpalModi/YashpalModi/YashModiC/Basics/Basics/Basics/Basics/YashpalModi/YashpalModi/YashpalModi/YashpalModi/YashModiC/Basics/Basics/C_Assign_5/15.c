#include<stdio.h>
#include<conio.h>

int main(){
 int num;
 printf("Enter Num:");
 scanf("%d",&num);
 if(num>=100 && num<=999)
 {
     printf("\n %d is 3 digit num",num);
 }
 else{
    printf("\n %d isnot 3 digit num",num);
 }
 return 0;
}
