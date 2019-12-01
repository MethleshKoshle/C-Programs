#include <stdio.h>
main(){
	int i, j, n, temp=1;

	printf("Enter number n: ");
	scanf("%d", &n);

	printf("2^%d ", 0);
	int sum=temp;

	for(i=1; i<=n; i++){
		temp = 1;
		for(j=1; j<i+1; j++)
			temp *= 2;
		printf(" + 2^%d ", j-1);
		sum += temp;
	}
	printf("\nSum upto %d terms is: %d\n", n+1, sum);
}