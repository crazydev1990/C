#include<stdio.h>
#include<conio.h>

int main()
{
    int birthyear,currentyear,age=0;
    printf("\n Enter Birth Year:");
    scanf("%d",&birthyear);
    printf("\n Enter Current Year:");
    scanf("%d",&currentyear);
    age=currentyear-birthyear;
    if(age > 18)
    {
        printf("\n Person is eligible to vote for India as Age is :%d",age);
    }
    else
    {
        printf("\n Person is not eligible to vote for India as Age is:%d",age);
    }
    return 0;
}
