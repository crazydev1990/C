#include<stdio.h>
#include<conio.h>

int main()
{
    int side1,side2,side3;
    printf("Enter 3 Sides Of Triangle:");
    scanf("%d %d %d",&side1,&side2,&side3);
    if(((side1+side2)>side3) &&((side2+side3)>side1) && ((side1+side3)>side2)){
        printf("\n Triangle is Valid");
    }else{
       printf("\n Triangle is not Valid");
    }
    return 0;
}
