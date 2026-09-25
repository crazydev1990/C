
#include<stdio.h>
#include<conio.h>

void main()
{
    int num1,num2;
    printf("\n Enter Number1:");
    scanf("%d",&num1);
    printf("\n Enter Number2:");
    scanf("%d",&num2);
    if(num1 > num2){
        printf("%d is greater",num1);
    }
    else if(num2 > num1){
        printf("%d is greater",num2);
    }
    else{
        printf("Both Are Equals");
    }
    getch();
}



