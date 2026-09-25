#include<stdio.h>
#include<conio.h>

int main()
{
    float fahrenhit,celcius;
    float f_to_c,c_to_f;

    printf("Enter Farenheit:");
    scanf("%f",&fahrenhit);
    printf("Enter Celcius:");
    scanf("%f",&celcius);

    f_to_c=(fahrenhit-32.0)*(5.0/9.0);
    c_to_f=(celcius*(9.0/5.0))+32.0;

    printf("\nF2c:%f",f_to_c);
    printf("\nC2f:%f",c_to_f);
    return 0;
}
