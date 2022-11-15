#include <stdio.h>
 
void add(int *a, int *b)
{
    *a = *a + *b;
}
 
int main()
{
    int x, y;
 
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
 
    add(&x, &y);
 
    printf("Sum = %d", x);
 
    return 0;
}