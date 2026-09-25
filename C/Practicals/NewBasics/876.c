#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14159

float calculateArea(float);

int main()
{
    float a,r;
    printf("\n Enter Radius:");
    scanf("%f",&r);
    a=calculateArea(r);
    printf("\nArea Of Circle is:%.2f",a);
    return 0;
}
float calculateArea(float radius)
{
    float area=PI * pow(radius,2);
    return area;
}
