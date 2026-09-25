#include <stdio.h>
#include <conio.h>

void calculate_notes(int amount)
{
    int notes[7] = {1000, 500, 200, 100, 50, 20, 10};
    int note_count;
    for (int i = 0; i < 7; i++)
    {
        note_count = amount / notes[i];
        if (note_count > 0)
        {
            printf("%d Note(s) of Rs. %d\n", note_count, notes[i]);
            amount = amount % notes[i];
        }
    }
    if (amount > 0)
    {
        printf("Remaining change left over: Rs. %d\n", amount);
    }
}

int main()
{
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    printf("\nNote Distribution:\n");
    calculate_notes(amount);
    return 0;
}
