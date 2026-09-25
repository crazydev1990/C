
#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("\n Enter Number:");
    scanf("%d",&num);
    if(num >=100 && num<=999){
        printf("%d is 3 digit number",num);
    }
    else{
        printf("%d is not 3 digit number",num);
    }
    getch();
}



