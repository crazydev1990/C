#include <stdio.h>
#include<conio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3) {
            continue; // skip 3 iteration n goto next iteration 4
        }
        printf("%d ", i);
    }
    return 0;
}

