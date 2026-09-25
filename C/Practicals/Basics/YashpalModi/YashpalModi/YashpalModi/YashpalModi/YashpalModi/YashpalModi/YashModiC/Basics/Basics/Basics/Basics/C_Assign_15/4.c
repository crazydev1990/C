#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10], i;
    int sum_even = 0, sum_odd = 0;
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
        {
            sum_even = sum_even + a[i];
        }
        else
        {
            sum_odd = sum_odd + a[i];
        }
    }
    printf("\n Sum of Even Numbers = %d", sum_even);
    printf("\n Sum of Odd Numbers = %d", sum_odd);
    getch();
    return 0;
}

