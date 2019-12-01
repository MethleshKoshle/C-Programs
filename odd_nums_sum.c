#include <stdio.h>
main(){
	int n, sum=0, i;
	printf("Enter n: ");
	scanf("%d", &n);

	printf("Odd numbers are:\n");
	for(i=1; i<2*n; i+=2){
		printf("%d ", i);
		sum += i;
	}
	printf("\nSum is %d\n", sum);
}