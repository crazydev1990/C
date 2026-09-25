
#include<stdio.h>
#include<conio.h>

int main()
{
    int volCube=0,height,length,breadth;
    printf("Enter Height:");
    scanf("%d",&height);
    printf("Enter Length:");
    scanf("%d",&length);
    printf("Enter Breadth:");
    scanf("%d",&breadth);
    volCube=height*length*breadth;
    printf("Volume of Cube:%d",volCube);
    return 0;
}




