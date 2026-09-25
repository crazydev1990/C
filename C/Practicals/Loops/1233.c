#include <stdio.h>
#include <conio.h>

void calculate_ncr_npr(int n, int r)
{
    int fact_n = 1;
    int fact_r = 1;
    int fact_nr = 1;
    int ncr;
    int npr;

    for (int i = 1; i <= n; i++)
    {
        fact_n = fact_n * i;
    }

    for (int i = 1; i <= r; i++)
    {
        fact_r = fact_r * i;
    }

    for (int i = 1; i <= (n - r); i++)
    {
        fact_nr = fact_nr * i;
    }

    npr = fact_n / fact_nr;
    ncr = fact_n / (fact_r * fact_nr);

    printf("\nnPr (Permutation) is: %d", npr);
    printf("\nnCr (Combination) is: %d\n", ncr);
}

void calculate_interest(float p, float r, int t)
{
    float si;
    float ci;
    float amount;

    si = (p * r * t) / 100;

    amount = p;
    for (int i = 1; i <= t; i++)
    {
        amount = amount * (1 + (r / 100));
    }
    ci = amount - p;

    printf("\nSimple Interest (SI) is: %.2f", si);
    printf("\nCompound Interest (CI) is: %.2f\n", ci);
}

int main()
{
    int n;
    int r;
    float p;
    float rate;
    int time;
    printf("Enter value for n: ");
    scanf("%d", &n);
    printf("Enter value for r: ");
    scanf("%d", &r);
    calculate_ncr_npr(n, r);
    printf("\n-------------------------\n");
    printf("\nEnter Principal amount (P): ");
    scanf("%f", &p);
    printf("Enter Rate of interest (R): ");
    scanf("%f", &rate);
    printf("Enter Time period in years (T): ");
    scanf("%d", &time);
    calculate_interest(p, rate, time);
    return 0;
}
