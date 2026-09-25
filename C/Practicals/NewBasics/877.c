#include<stdio.h>
#include<conio.h>

float calculateSI(float,float,float);

int main()
{
    float p,r,n,si=0;
    printf("\n Enter Principle Amount:");
    scanf("%f",&p);
    printf("\n Enter Rate Of Interest:");
    scanf("%f",&r);
    printf("\n Enter Number Of Years:");
    scanf("%f",&n);
    si=calculateSI(p,r,n);
    printf("\n Simple Interest:%.2f",si);
    return 0;
}
float calculateSI(float amount,float rate,float period)
{
    float SI;
    SI=(amount * rate * period)/100;
    return SI;
}
