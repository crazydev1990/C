#include<stdio.h>
#include<conio.h>

int main()
{
    int num,reverseNum=0,tempOrg,lastDig;
    printf("\n Enter Number:");
    scanf("%d",&num);
    tempOrg=num;
    printf("\n Original Number:%d",num);
    while(tempOrg >0){
        lastDig=tempOrg%10;
        reverseNum=(reverseNum*10)+lastDig;
        tempOrg=tempOrg/10;
    }
    printf("\n Reverse Number:%d",reverseNum);
    if(num==reverseNum){
        printf("\n%d is Palindrome Number",num);
    }
    else{
        printf("\n%d is not Palindrome Number",num);
    }
    return 0;
}
