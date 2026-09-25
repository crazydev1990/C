#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Enter Num:");
    scanf("%d",&num);
    if(num>0){
        printf("\n%d is Positive",num);
    }else if(num<0){
       printf("\n%d is Negative",num);
    }else{
       printf("\n%d is Zero",num);
    }
    return 0;
}
