#include <stdio.h>
#include<conio.h>

int main()
{
    int h1, m1, s1;
    int h2, m2, s2;
    int t1, t2, diff;
    printf("Enter first time (hh mm ss): ");
    scanf("%d %d %d", &h1, &m1, &s1);
    printf("Enter second time (hh mm ss): ");
    scanf("%d %d %d", &h2, &m2, &s2);
    t1 = h1 * 3600 + m1 * 60 + s1;
    t2 = h2 * 3600 + m2 * 60 + s2;
    diff = t2 - t1;
    if (diff < 0)
        diff = -diff;
    printf("Difference = %d seconds", diff);
    return 0;
}
