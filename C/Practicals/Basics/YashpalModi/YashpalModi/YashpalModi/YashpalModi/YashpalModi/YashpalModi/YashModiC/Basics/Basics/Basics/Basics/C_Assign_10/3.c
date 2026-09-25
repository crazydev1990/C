#include <stdio.h>
#include<conio.h>
int f1(int);

int main()
{
    int n,k;
    printf("\n 1 To N: ");
    scanf("%d", &n);
    f1(n);
    printf("\n");
    return 0;
}
int f1(int n)
{
    int s;
    if (n == 0)
        return 0;
    else
       f1(n - 1);
    printf("\n %d",n);
}
