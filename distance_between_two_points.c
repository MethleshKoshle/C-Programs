#include <stdio.h>
#include <math.h>


int main(){
	float x1, y1, x2, y2;
	printf("Input x1: ");
	scanf("%f", &x1);
	printf("Input y1: ");
	scanf("%f", &y1);
	printf("Input x2: ");
	scanf("%f", &x2);
	printf("Input y2: ");
	scanf("%f", &y2);


	float temp, Distance, n, x;
	temp = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);

    printf("Distance between the said points: %f\n", sqrt(temp));
return 0;
}