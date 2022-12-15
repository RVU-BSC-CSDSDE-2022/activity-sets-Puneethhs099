#include<stdio.h>
#include<math.h>
int main();
void input_camel_details(float *radius, float *height, float *length)
{
	printf("Enter the radius of the camel's stomach: ");
	scanf("%f", radius);

	printf("Enter the height of the camel: ");
	scanf("%f", height);

	printf("Enter the length of the camel: ");
	scanf("%f", length);
}

float find_weight(float radius, float height, float length)
{
	return 3.14 * radius * radius * radius * (height * length);
}

void output(float radius, float height, float length, float weight)
{
	printf("The weight of the camel with radius %f, height %f, and length %f is %f.\n", radius, height, length, weight);
}

int main()
{
	float radius;
	float height;
	float length;
	float weight;

	input_camel_details(&radius, &height, &length);
	weight = find_weight(radius, height, length);
	output(radius, height, length, weight);

	return 0;
}
