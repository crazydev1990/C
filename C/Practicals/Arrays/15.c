#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int arr[9];
    int choice;
    printf("Enter 9 numbers:\n");
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n--- MENU ---");
    printf("\n1. Max and Min");
    printf("\n2. Even, Odd, and Prime");
    printf("\n3. Most Repeated");
    printf("\n4. Positive, Negative, and Zero");
    printf("\n5. Exit");
    printf("\n\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        {
            int max = arr[0];
            int min = arr[0];

            for (int i = 0; i < 9; i++)
            {
                if (arr[i] > max)
                {
                    max = arr[i];
                }
                if (arr[i] < min)
                {
                    min = arr[i];
                }
            }
            printf("\nMax: %d", max);
            printf("\nMin: %d\n", min);
            break;
        }
        case 2:
        {
            int even = 0, odd = 0, prime = 0;
            for (int i = 0; i < 9; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    even = even + 1;
                }
                else
                {
                    odd = odd + 1;
                }
                int num = arr[i];
                if (num == 2 || num == 3 || num == 5 || num == 7)
                {
                    prime = prime + 1;
                }
            }
            printf("\nEven: %d", even);
            printf("\nOdd: %d", odd);
            printf("\nPrime: %d\n", prime);
            break;
        }
        case 3:
        {
           int num = -1;
           int max = 0;
           for (int i = 1; i <= 100; i++)
           {
              int count = 0;
              for (int j = 0; j < 9; j++)
              {
                if (arr[j] == i)
                {
                   count = count + 1;
                }
              }
              if (count > max)
              {
                 max = count;
                 num = i;
              }
            }
            if (max > 1)
            {
                printf("\nMost Repeated: %d (Times: %d)\n", num, max);
            }
            else
            {
               printf("\nNo number is repeated\n");
            }
            break;
        }
        case 4:
        {
            int pos = 0, neg = 0, zero = 0;
            for (int i = 0; i < 9; i++)
            {
                if (arr[i] > 0)
                {
                    pos = pos + 1;
                }
                else if (arr[i] < 0)
                {
                    neg = neg + 1;
                }
                else
                {
                    zero = zero + 1;
                }
            }
            printf("\nPositive: %d", pos);
            printf("\nNegative: %d", neg);
            printf("\nZero: %d\n", zero);
            break;
        }
        case 5:
            exit(0);
        default:
            printf("\nInvalid Choice!\n");
    }
    return 0;
}

