#include <stdio.h>
void main(){
	float x;

	printf("Enter x: ");
	scanf("%f", &x);
	x = 1/x;

	x = x - x*x*x/6 + x*x*x*x*x/120 - x*x*x*x*x*x*x/5040;
	printf("sin(1/x) = %f\n", x);
}