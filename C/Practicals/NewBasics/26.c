#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int num,square,cube,root;
    printf("Enter Num:");
    scanf("%d",&num);
    square=(int)pow(num,2);
    cube=(int)pow(num,3);
    root=(int)sqrt(num);
    printf("\n Square:%d",square);
    printf("\n Cube:%d",cube);
    printf("\n Squareroot:%d",root);
    return 0;
}
