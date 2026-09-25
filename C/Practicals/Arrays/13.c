#include <stdio.h>
#include <conio.h>

int main()
{
    int numbers[10];
    int count = 0;
    int sum = 0;

    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            numbers[count] = i;
            count = count + 1;
        }
    }
    printf("The first 10 even numbers are: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
        sum = sum + numbers[i];
    }
    printf("\nSum of these 10 even numbers is: %d\n", sum);
    return 0;
}

