#include <stdio.h>
main(){
	int n, i, t1, t2=1, t=0;
	printf("Enter number of terms: ");
	scanf("%d", &n);

	printf("\nTerms upto %d are:\n", n);
	for(i=0; i<n; i+=1){
		t1 = t;
		printf("%d ", t);
		t = t1 + t2;
		t2 = t1;
	}
	printf("\n");
}