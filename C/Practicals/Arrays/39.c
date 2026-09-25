#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10], i;
    int largest = -9999, sec_largest = -9999;
    int smallest = 9999, sec_smallest = 9999;
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] > largest)
        {
            sec_largest = largest;
            largest = a[i];
        }
        else if(a[i] > sec_largest && a[i] != largest)
        {
            sec_largest = a[i];
        }
        if(a[i] < smallest)
        {
            sec_smallest = smallest;
            smallest = a[i];
        }
        else if(a[i] < sec_smallest && a[i] != smallest)
        {
            sec_smallest = a[i];
        }
    }
    printf("\n 2nd Smallest Number = %d", sec_smallest);
    printf("\n 2nd Largest Number = %d", sec_largest);
    getch();
    return 0;
}

