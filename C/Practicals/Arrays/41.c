#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10], i;
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Array in Reverse Order:\n");
    for(i = 9; i >= 0; i--)
    {
        printf("%d\n ", a[i]);
    }
    getch();
    return 0;
}

