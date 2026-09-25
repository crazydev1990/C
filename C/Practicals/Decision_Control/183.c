#include<stdio.h>
#include<conio.h>
void greteroftwonos(int,int);

int main()
{
    int num1,num2;
    printf("\n Enter Values:");
    scanf("%d %d",&num1,&num2);
    greteroftwonos(num1,num2);
    return 0;
}
void greteroftwonos(int x,int y)
{
    if(x>y)
    {
        printf("%d is bigger",x);
    }
    else if(x==y)
    {
        printf("\n Both Values Are Equal");
    }
    else
    {
        printf("%d is bigger",y);
    }
}
