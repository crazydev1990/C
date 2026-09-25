#include<stdio.h>
#include<conio.h>

int main()
{
    int num,position;
    printf("Enter Number:");
    scanf("%d",&num);
    if(num != 0)
    {
        for(position=1;position<=32;position++)
        {
            if(num%2 !=0){
                break;
            }
            num=num/2;
        }
        printf("\nThe position of the first 1 from LSB is: %d\n",position);
    }
    else{
        printf("No 1s found (number is 0).\n");
    }
    return 0;
}//1100 R To L 1st 1 digit
