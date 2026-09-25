#include <stdio.h>
#include <conio.h>

void area_square(float side)
{
    float ans;
    ans = side * side;
    printf("\nArea of Square is: %.2f\n", ans);
}

void area_triangle(float base, float height)
{
    float ans;
    ans = 0.5 * base * height;
    printf("\nArea of Triangle is: %.2f\n", ans);
}

void area_rectangle(float length, float width)
{
    float ans;
    ans = length * width;
    printf("\nArea of Rectangle is: %.2f\n", ans);
}

void area_circle(float radius)
{
    float ans;
    ans = 3.14 * radius * radius;
    printf("\nArea of Circle is: %.2f\n", ans);
}

int main()
{
    float side;
    float base;
    float height;
    float length;
    float width;
    float radius;
    printf("Enter side of Square: ");
    scanf("%f", &side);
    area_square(side);
    printf("\n-------------------------\n");
    printf("\nEnter base of Triangle: ");
    scanf("%f", &base);
    printf("Enter height of Triangle: ");
    scanf("%f", &height);
    area_triangle(base, height);
    printf("\n-------------------------\n");
    printf("\nEnter length of Rectangle: ");
    scanf("%f", &length);
    printf("Enter width of Rectangle: ");
    scanf("%f", &width);
    area_rectangle(length, width);
    printf("\n-------------------------\n");
    printf("\nEnter radius of Circle: ");
    scanf("%f", &radius);
    area_circle(radius);

    return 0;
}

