#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10], i;
    int greatest = -9999;
    int smallest = 9999;
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] > greatest)
        {
            greatest = a[i];
        }
        if(a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    printf("\n Greatest Number = %d", greatest);
    printf("\n Smallest Number = %d", smallest);
    getch();
    return 0;
}

