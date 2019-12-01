#include <stdio.h>
#define len 5

main(){
	int i=1;
	float a[len];

	for(i=0; i<len; i++){
		printf("a[%d]: ", i);
		scanf("%f", &a[i]);
	}

	int min=a[0];

	for(i=1; i<len; i++)
		if(min>a[i])
			min = a[i];

	printf("%dth element is minimum i.e. %d\n", i-1, min);
}