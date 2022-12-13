#include <stdio.h>

void areaOfTriangle(float base, float height);

int main()
{
    float base, height;

    printf("Enter base of the triangle: ");
    scanf("%f",&base);
    printf("Enter height of the triangle: ");
    scanf("%f",&height);

    areaOfTriangle(base, height);

    return 0;
}

void areaOfTriangle(float base, float height)
{
    float area = 0.5 * base * height;

    printf("Area of Triangle = %.2f", area);
}