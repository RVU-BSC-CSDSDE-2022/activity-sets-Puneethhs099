#include<stdio.h> 

int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largerst);

int input()
{
  int n;
  printf("Enter a number:\n");
  scanf("%d", &n);
  return n;
}
int compare(int a, int b , int c){
  int largest;
  if(a>=b && a>=c){
    largest=a;
  }
  else if(b>=a && b>=c){
    largest = b;
  }
  else{
    largest = c;
  }
  return largest;
}
void output(int a, int b, int c, int largest)
{
  printf("Larger number of %d, %d, %d is %d", a, b, c, largest);
}

int main(){
  int a, b, c, largest;
  a = input();
  b = input();
  c = input();
  largest = compare(a, b, c);
  output(a, b, c, largest);
}