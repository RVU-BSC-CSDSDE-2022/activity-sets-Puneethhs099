#include <stdio.h> 
void compare(int *x, int *y, int *z) 
{ 
if(*x > *y && *x > *z) 
{ 
printf("%d is Greater", *x); 
} 
else if(*y > *z) 
{ 
printf("%d is Greater", *y); 
} 
else 
{ 
printf("%d is Greater", *z); 
} 
} 
int main() 
{ 
int a, b, c; 
printf("Enter three numbers : "); 
scanf("%d%d%d", &a, &b, &c); 
compare(&a, &b, &c); 
return 0; 
}