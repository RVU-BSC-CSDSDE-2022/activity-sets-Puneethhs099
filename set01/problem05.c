#include<stdio.h> 

void compare(int a, int b, int c); 

int main() 
{ 
    int a, b, c; 
   
    printf("Enter three numbers: "); 
    scanf("%d%d%d", &a, &b, &c); 
   
    compare(a, b, c); 
   
    return 0; 
} 

void compare(int a, int b, int c) 
{ 
    if (a > b && a > c) 
        printf("%d is the largest number.", a); 
   
    else if (b > a && b > c) 
        printf("%d is the largest number.", b); 
   
    else
        printf("%d is the largest number.", c); 
}