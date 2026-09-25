#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10];
    int i, sum = 0;
    float avg;
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    avg = sum / 10.0;
    printf("\n Sum = %d", sum);
    printf("\n Average = %f", avg);
    getch();
    return 0;
}

