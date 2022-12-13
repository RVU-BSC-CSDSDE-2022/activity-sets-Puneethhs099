#include<stdio.h>
void input_array(int n, int a[n]);
void sumOfCompositeNumbers(int n, int a[n]);

int main()
{
	int size;
	printf("Enter the size of the array: ");
	scanf("%d", &size);

	int arr[size];
	input_array(n, a[]);
	sumOfCompositeNumbers(n, a[]);

	return 0;
}

void readArray(int n, int a[n])
{
	printf("Enter the elements of the array: \n");
	for(int i=0; i<size; i++)
	{
		scanf("%d", &a[n]);
	}
}

void sumOfCompositeNumbers(int n, int [n])
{
	int sum = 0;
	for(int i=0; i<size; i++)
	{
		int count = 0;