#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10], b[10], i;
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 10; i++)
    {
        b[i] = a[i];
    }
    printf("\n Values in Second Array:\n");
    for(i = 0; i < 10; i++)
    {
        printf(" %d\n ", b[i]);
    }
    getch();
    return 0;
}

