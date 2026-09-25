#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[10];
    int choice, pos, item;
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n1. Insert\n2. Delete\n3. Search\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter position (0 to 4): ");
        scanf("%d", &pos);
        printf("Enter number: ");
        scanf("%d", &item);

        printf("Final Array: ");
        for (int i = 0; i < 5; i++)
        {
            if (i == pos)
            {
                printf("%d %d ", item, arr[i]);
            }
            else
            {
                printf("%d ", arr[i]);
            }
        }
    }
    else if (choice == 2)
    {
        printf("Enter position to delete (0 to 4): ");
        scanf("%d", &pos);
        printf("Final Array: ");
        for (int i = 0; i < 5; i++)
        {
            if (i != pos)
            {
                printf("%d ", arr[i]);
            }
        }
    }
    else if (choice == 3)
    {
        printf("Enter position to search (0 to 4): ");
        scanf("%d", &pos);
        printf("Number at position %d is: %d\n", pos, arr[pos]);
    }
    printf("\n");
    return 0;
}

