#include<stdio.h>
#include<conio.h>

int main()
{
    int number,temp,digit;
    int num;
    int evenCount=0,oddCount=0;
    printf("Enter Number:");
    scanf("%d",&number);
    temp=number;
    while(temp>0)
    {
        digit=temp%10;
        if(digit%2==0){
            printf("\nEven Digit: %d ",digit);
            evenCount++;
        }else{
            printf("\nOdd Digit: %d ",digit);
            oddCount++;
        }
        temp=temp/10;
    }
    printf("\n Total Odd :%d",oddCount);
    printf("\n Total Even :%d",evenCount);
    return 0;
}
