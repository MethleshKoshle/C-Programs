#include <stdio.h>
main(){
	int num, temp=1;
	printf("Enter number n:");
	scanf("%d", &num);

	while(num != 1)
		temp *= num--;
	printf("Factorial is: %d\n", temp);
}