#include <stdio.h>
#include<conio.h>

int main()
{
    int a, b, c;
    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);
    switch(1)
    {
        case 1:
            if (a + b <= c)
            {
                printf("Not a triangle because sum of 2 sides not greater than equal to 3rd side\n");
                break;
            }
            if (a + c <= b)
            {
                printf("Not a triangle because sum of 2 sides not greater than equal to 3rd side\n");
                break;
            }
            if (b + c <= a)
            {
                printf("Not a triangle because sum of 2 sides not greater than equal to 3rd side\n");
                break;
            }
        case 2:
            if (a == b)
            {
                if (b == c)
                {
                    printf("Equilateral triangle\n");
                    break;
                }
            }
        case 3:
            if (a == b)
            {
                printf("Isosceles triangle\n");
                break;
            }
            if (b == c)
            {
                printf("Isosceles triangle\n");
                break;
            }
            if (a == c)
            {
                printf("Isosceles triangle\n");
                break;
            }
        case 4:
            if (a*a + b*b == c*c)
            {
                printf("Right-angled triangle\n");
                break;
            }
            if (a*a + c*c == b*b)
            {
                printf("Right-angled triangle\n");
                break;
            }
            if (b*b + c*c == a*a)
            {
                printf("Right-angled triangle\n");
                break;
            }
        default:
            printf("Scalene triangle\n");
            break;
    }
    return 0;
}

