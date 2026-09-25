#include<stdio.h>
#include<conio.h>

int main()
{
    int a=7,b=5,c=6,d=7;
    int result,result1,result2;
    result1=(a+b)/c*d;
    printf("Result is:%d",result1);
    result2=a+b/c*d;
    printf("\n Result is:%d",result2);
    result=a+(b/c)*d;
    printf("\n Result is:%d",result);
    return 0;
}
