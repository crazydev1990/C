#include<stdio.h>
#include<conio.h>

int main()
{
    float net,gross,basic,hra,da,ins,pf,medical,ded;
    printf("Enter Basic Salary:");
    scanf("%f",&basic);
    da=0.5*basic;
    hra=0.1*basic;
    medical=0.04*basic;
    gross=basic+da+hra+medical;
    pf=0.05*gross;
    ins=0.07*gross;
    ded=pf+ins;
    net=gross-ded;
    printf("\n Net Payment:%f",net);
    return 0;
}
