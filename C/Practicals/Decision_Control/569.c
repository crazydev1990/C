#include <stdio.h>
#include<conio.h>

int main()
{
    float units, bill_amount,total_bill;
    int flag = 0;
    printf("Enter total units : ");
    scanf("%f", &units);

    if (units <= 50)
        flag = 1;
    if (units > 50   && units <= 150)
        flag = 2;
    if (units > 150  && units <= 250)
        flag = 3;
    if (units > 250)
        flag = 4;
    switch (flag)
    {
        case 1:
            bill_amount = units * 0.50;
            break;

        case 2:
            bill_amount = (50 * 0.50) + ((units - 50) * 0.75);
            break;

        case 3:
            bill_amount = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
            break;
        case 4:
            bill_amount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
            break;
        default:
            printf("\nInvalid units entered.\n");
            return 1;
    }
    total_bill = bill_amount + (bill_amount * 0.20);
    printf("\nBase Bill Amount = Rs. %f\n", bill_amount);
    printf("\nTotal Bill (with 20%% Surcharge) = Rs. %f\n", total_bill);
    return 0;
}

