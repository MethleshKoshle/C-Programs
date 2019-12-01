#include <stdio.h>
main(){
	int num, i;
	printf("Input number of terms: ");
	scanf("%d", &num);

	for(i=0; i<num; i++)
		printf("Number is %d | cube is %d\n", i+1, i*i*i+1+3*i+3*i*i);
}
