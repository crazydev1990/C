#include <stdio.h>
#include <conio.h>
void calculateProbability(float, float);
int main()
{
    float favorable, total;
    printf("Enter number of favorable outcomes: ");
    scanf("%f", &favorable);
    printf("Enter number of total outcomes: ");
    scanf("%f", &total);
    calculateProbability(favorable, total);
    return 0;
}
void calculateProbability(float favorable, float total)
{
    if (total <= 0)
    {
        printf("\nTotal outcomes must be greater than 0!\n");
    }
    else if (favorable > total)
    {
        printf("\nFavorable outcomes cannot be greater than total outcomes!\n");
    }
    else
    {
        float p = favorable / total;
        printf("\nProbability is: %.4f\n", p);
        printf("Percentage Chance: %.2f%%\n", p * 100);
    }
}


