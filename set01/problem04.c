#include <stdio.h>

void add(int *a, int *b)
{
    *a = *a + *b;
}
int main()
{
    int x, y, sum;
    x= input();
    y= input();b   
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    add(&x, &y);
    printf("Sum = %d", x);
    return 0;
} 