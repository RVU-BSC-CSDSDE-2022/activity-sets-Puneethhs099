#include<stdio.h>
int main(){
	Camel camel = input();
	find_weight(&camel); 
	output(camel);
	return 0;
}
Camel input(){
	Camel c;
	printf("Enter the radius: ");
	scanf("%f", &c.radius);
	printf("Enter the height: ");
	scanf("%f", &c.height);
	printf("Enter the length: ");
	scanf("%f", &c.length);
	
	return c;
}

float find_weight(Camel c){
	c.weight = 3.14 * c.radius * c.radius * c.radius * sqrt(c.height * c.length);
	return c.weight;
}

//or
void find_weight(Camel *c){
	c->weight = 3.14 * c->radius * c->radius * c->radius * sqrt(c->height * c->length);
}

void output(Camel c){
	printf("The weight of the camel is %f", c.weight);
}