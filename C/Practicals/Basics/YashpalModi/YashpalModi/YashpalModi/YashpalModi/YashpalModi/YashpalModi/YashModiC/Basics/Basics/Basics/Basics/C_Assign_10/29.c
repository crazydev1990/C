#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void fahrenheitToCelsius();
void celsiusToFahrenheit();
void calculateSimpleInterest();
void calculateCompoundInterest();
void usdToInr();
void inrToUsd();

int main()
{
    int choice;
    printf("--- MENU ---");
    printf("\n1. Fahrenheit to Celsius");
    printf("\n2. Celsius to Fahrenheit");
    printf("\n3. Simple Interest");
    printf("\n4. Compound Interest");
    printf("\n5. USD to INR Conversion");
    printf("\n6. INR to USD Conversion");
    printf("\n7. Exit");
    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            fahrenheitToCelsius();
            break;
        case 2:
            celsiusToFahrenheit();
            break;
        case 3:
            calculateSimpleInterest();
            break;
        case 4:
            calculateCompoundInterest();
            break;
        case 5:
            usdToInr();
            break;
        case 6:
            inrToUsd();
            break;
        case 7:
            exit(0);
        default:
            printf("\nInvalid Choice!\n");
    }

    return 0;
}

void fahrenheitToCelsius()
{
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("Temperature in Celsius: %.2f\n", c);
}

void celsiusToFahrenheit()
{
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", f);
}

void calculateSimpleInterest()
{
    float p, r, t, si;
    printf("Enter Principal amount (P): ");
    scanf("%f", &p);
    printf("Enter Rate of interest (R): ");
    scanf("%f", &r);
    printf("Enter Time period in years (T): ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    printf("Simple Interest: %.2f\n", si);
}

void calculateCompoundInterest()
{
    float p, r, t, ci, amount;
    printf("Enter Principal amount (P): ");
    scanf("%f", &p);
    printf("Enter Rate of interest (R): ");
    scanf("%f", &r);
    printf("Enter Time period in years (T): ");
    scanf("%f", &t);
    amount = p * pow((1 + r / 100), t);
    ci = amount - p;
    printf("Compound Interest: %.2f\n", ci);
    printf("Total Amount: %.2f\n", amount);
}

void usdToInr()
{
    float usd, inr;
    float rate = 87.50;
    printf("Enter amount in USD: ");
    scanf("%f", &usd);
    inr = usd * rate;
    printf("%.2f USD = %.2f INR\n", usd, inr);
}

void inrToUsd()
{
    float inr, usd;
    float rate = 87.50;
    printf("Enter amount in INR: ");
    scanf("%f", &inr);
    usd = inr / rate;
    printf("%.2f INR = %.2f USD\n", inr, usd);
}

