#include<stdio.h>
void scalene(int a, int b, int c);

int main(){

	float a, b, c;
	
	printf("Enter the length of the three sides of the triangle: \n");
	scanf("%f %f %f", &a, &b, &c);

	scalene(a, b, c);
	
	return 0;
}
void scalene(float x, float y, float z){

	if(x != y && y != z && z != x){
		printf("The triangle is scalene.\n");
	} else {
		printf("The triangle is not scalene.\n");
	}
}