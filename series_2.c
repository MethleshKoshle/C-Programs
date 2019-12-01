#include <stdio.h>
#include <string.h>
main(){
	int n, temp=1, sum=0, i;
	printf("Input n:");
	scanf("%d", &n);

	printf("1");
	for(i=0; i<n; i++){
		sum += temp;
		temp = temp*10;
		temp++;
		printf(" + %d", temp);
	}

	printf("\nSum is: %d\n", sum);
}