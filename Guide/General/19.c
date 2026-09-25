#include<stdio.h>
#include<conio.h>

int main()
{
    float inr,usd,ex_rate,usd_to_inr,inr_to_usd;
    printf("Enter INR:");
    scanf("%f",&inr);
    printf("Enter USD:");
    scanf("%f",&usd);
    printf("Enter Rate:");
    scanf("%f",&ex_rate);
    usd_to_inr=usd * ex_rate;
    inr_to_usd=inr / ex_rate;
    printf("\n USD To INR Conversion :%0.2f",usd_to_inr);
    printf("\n INR To USD Conversion :%0.2f",inr_to_usd);
    return 0;
}
