#include <stdio.h>
#define len 5
main(){
	int i=1;
	float a[len];

	for(i=0; i<len; i++){
		printf("a[%d]: ", i);
		scanf("%f", &a[i]);
	}

	int max=a[0];

	for(i=1; i<len; i++)
		if(max<a[i])
			max = a[i];

	printf("%dth element is maximum i.e. %d\n", i-1, max);
}