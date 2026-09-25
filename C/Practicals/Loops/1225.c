#include <stdio.h>
#include <conio.h>


int main()
{
    int start, end;
    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);
    printf("\nPrime numbers between %d and %d are: \n", start, end);
    printPrimesInRange(start, end);
    return 0;
}
void printPrimesInRange(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count = count + 1;
            }
        }
        if (count == 2) {
            printf("%d ", i);
        }
    }
    printf("\n");
}


