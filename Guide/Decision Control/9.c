#include<stdio.h>
#include<conio.h>

int main()
{
    int num,first,last,middle,place_value=1,swapped;
    printf("Enter Number:");
    scanf("%d",&num);
    last=num%10;
    first = num;
    while (first >= 10) {
        first = first / 10;
        place_value=place_value*10;
    }
    middle=num%place_value;
    middle=middle/10;
    swapped=(last*place_value)+(middle*10)+first;
    printf("\n After Exchange First n last digits:%d",swapped);
    return 0;
}
