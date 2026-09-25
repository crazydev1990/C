#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int i,cube;
    for(i=1;i<=10;i++)
    {
        cube=(int)pow(i,3);
        printf("\n %d is in 1st 10 Natural Numbers & its Cube is %d",i,cube);
    }
    return 0;
}

