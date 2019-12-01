#include <stdio.h>
main(){
	int i=0, terms;
	float sum=0;
	printf("Input the number of terms: ");
	scanf("%d", &terms);

	while(i<terms){
		printf("1/%d ", ++i);
		sum += (float) 1/i;
		if(i<terms)
			printf("+ ");
	}
	printf("\nSum of %d terms is: %.5f\n", terms, sum);

}