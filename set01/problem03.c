#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);

int main(){
	int x, y, sum;
	x = input();
	y = input();
	sum = add(x, y);
	output(x, y, sum);
	return 0;
}
int input(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	return num;
}

int add(int a, int b){
	return a+b;
}

void output(int a, int b, int sum){
	printf("The sum of %d and %d is %d \n", a, b, sum);
}













































