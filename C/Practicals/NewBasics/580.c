#include <stdio.h>
#include<conio.h>
int main()
{
    int date, day, month, year;
    printf("Enter date (DDMMYYYY): ");
    scanf("%d", &date);
    day = date / 1000000;
    month = (date / 10000) % 100;
    year = date % 10000;
    printf("Day   = %d\n", day);
    printf("Month = %d\n", month);
    printf("Year  = %d\n", year);
    return 0;
}
