#include<stdio.h>
int addnumbers(int n1,int n2);
int main()
{
  int num1, num2, sum;
  printf("\nEnter two numbers:");
  scanf("%d %d", &num1, &num2);
  sum = addNumbers(num1, num2);
  printf("\nSum = %d",sum);
  return 0;
  }
int addnumbers(int n1, int n2)
{
  int res;
  res = n1 + n2;
  return res;
}