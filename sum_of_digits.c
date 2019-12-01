#include <stdio.h>

int main(){
	int num, sum=0;
	printf("Enter a number <500: ");
	scanf("%d", &num);

	sum += num%10 + (num/10)%10 + (num/100)%10;

	printf("Sum of digits is %d\n", sum);

	return 0;
}