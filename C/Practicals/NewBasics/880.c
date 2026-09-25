#include <stdio.h>
#include <conio.h>

void usd_to_inr(float usd)
{
    float inr;
    inr = usd * 87.50;
    printf("\n%.2f USD = %.2f INR\n", usd, inr);
}

void fahrenheit_to_celsius(float f)
{
    float c;
    c = (f - 32) * 5 / 9;
    printf("\n%.2f Fahrenheit = %.2f Celsius\n", f, c);
}

void inch_to_feet(float inch)
{
    float feet;
    feet = inch / 12;
    printf("\n%.2f Inch = %.2f Feet\n", inch, feet);
}

void kg_to_gram(float kg)
{
    float gram;
    gram = kg * 1000;
    printf("\n%.2f KG = %.2f Gram\n", kg, gram);
}

int main()
{
    float usd;
    float fahrenheit;
    float inch;
    float kg;
    printf("Enter amount in USD: ");
    scanf("%f", &usd);
    usd_to_inr(usd);
    printf("\n-------------------------\n");
    printf("\nEnter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    fahrenheit_to_celsius(fahrenheit);
    printf("\n-------------------------\n");
    printf("\nEnter length in Inch: ");
    scanf("%f", &inch);
    inch_to_feet(inch);
    printf("\n-------------------------\n");
    printf("\nEnter weight in KG: ");
    scanf("%f", &kg);
    kg_to_gram(kg);
    return 0;
}

