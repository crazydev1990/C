#include <stdio.h>
#include<conio.h>
int main()
{
    int d1, m1, y1;
    int d2, m2, y2;
    int days1, days2, diff;
    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1, &m1, &y1);
    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2, &m2, &y2);
    days1 = y1 * 365 + m1 * 30 + d1;
    days2 = y2 * 365 + m2 * 30 + d2;
    diff = days2 - days1;
    if (diff < 0)
        diff = -diff;
    printf("Difference = %d days", diff);
    return 0;
}
