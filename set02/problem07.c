#include <stdio.h>

typedef struct triangle
{
   float base;
   float altitude;
   float area;
} Triangle;
Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main()
{
   Triangle t;
   t=input_triangle();
   find_area(&t);
   output(t);
  return 0;
}
Triangle input_triangle()
{
    Triangle t;
    printf("Enter the base of the triangle\n");
  scanf("%f" , &t.base);
  printf("Enter the altitude of the triangle\n");
  scanf("%f", &t.altitude);
  return t;
}

void find_area(Triangle *t)
{
      t->area=((t->base)*(t->altitude))*0.5;
}

void output(Triangle t)
{
   printf("The area of the triangle is %f", t.area);
}