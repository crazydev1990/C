#include<stdio.h>
#include<conio.h>

int main()
{
    int birthyear,currentyear,age=0;
    printf("Enter BirthYear:");
    scanf("%d",&birthyear);
    printf("\nEnter CurrentYear:");
    scanf("%d",&currentyear);
    age=currentyear-birthyear;
    printf("\n Age is :%d",age);
    return 0;
}

