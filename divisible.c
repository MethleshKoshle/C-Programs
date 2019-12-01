#include <stdio.h>
main(){
	int sum=0, i;
	printf("Numbers between 100 and 200, divisible by 9:\n");
	for(i=100; i<200; i++)
		if(!(i%9)){
			sum += i;
			printf("%d ", i);
		}
	printf("\nSum is: %d\n", sum);
}