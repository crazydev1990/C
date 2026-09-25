#include <stdio.h>
#include<conio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float d, r1, r2, realPart, imagPart;
    int flag = 0;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4 * a * c);
    if (d > 0)
        flag = 1;
    if (d < 0)
        flag = 2;
    if (d == 0)
        flag = 3;

    switch (flag)
    {
        case 1:
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("Roots are real and distinct.\n");
            printf("Root 1 = %f\n", r1);
            printf("Root 2 = %f\n", r2);
            break;
        case 2:
            realPart = -b / (2 * a);
            imagPart = sqrt(-d) / (2 * a);
            printf("Roots are complex and imaginary.\n");
            printf("Root 1 = %f + %.f\n", realPart, imagPart);
            printf("Root 2 = %f - %f\n", realPart, imagPart);
            break;
        case 3:
            r1 = -b / (2 * a);
            r2 = -b / (2 * a);
            printf("Roots are real and equal.\n");
            printf("Root 1 = Root 2 = %.2f\n", r1);
            break;
    }
    return 0;
}

