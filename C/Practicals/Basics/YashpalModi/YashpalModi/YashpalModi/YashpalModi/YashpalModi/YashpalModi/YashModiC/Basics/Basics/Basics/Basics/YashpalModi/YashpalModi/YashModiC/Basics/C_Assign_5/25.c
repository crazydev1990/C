#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int i,square;
    for(i=1;i<=10;i++)
    {
        square=(int)pow(i,2);
        printf("\n %d is in 1st 10 Natural Numbers & its Square is %d",i,square);
    }
    return 0;
}
