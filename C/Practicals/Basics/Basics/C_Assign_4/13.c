#include<stdio.h>
#include<conio.h>

int main()
{
    int num,sum=0,lastDigit,tempOrigin,lastDigitCube;
    printf("Enter Num:");
    scanf("%d",&num);
    tempOrigin=num;
    while(tempOrigin > 0){
        lastDigit=tempOrigin%10;
        lastDigitCube=(lastDigit*lastDigit*lastDigit);
        sum=sum+lastDigitCube;
        tempOrigin=tempOrigin/10;
    }
    if(num==sum){
        printf("\n %d is Armstrong Number",num);
    }
    else{
        printf("\n %d is not Armstrong Number",num);
    }
    return 0;
}
