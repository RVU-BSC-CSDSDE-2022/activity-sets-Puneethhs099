#include <stdio.h>

struct complex
{
    float real;
    float imaginary;
};
typedef struct complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main()
{
  Complex a,b, sum;
   a=input_complex();
   b=input_complex();
   sum=add_complex(a,b);
    output(a,b, sum);
    return 0;
}

Complex input_complex()
{
  Complex c1;
  printf("Enter the real part\n");
  scanf("%f", &c1.real);
  printf("Enter the imaginary part\n");
  scanf("%f", &c1.imaginary);
  return c1;
}
Complex add_complex(Complex a, Complex b)
{
  Complex sum;
   sum.real=a.real+b.real;
    sum.imaginary=       a.imaginary+b.imaginary;
  return sum;
}

void output(Complex a, Complex b, Complex sum)
{
    printf("The sum of %f+%fi and %f+%fi is %f+%fi\n", a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}