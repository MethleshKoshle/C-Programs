/* Problem: Given an array by the user find the maximum of this array.*/
#include <stdio.h>
main(){
	int i=1, len;
	printf("Enter the size of the array: ");
	scanf("%d", len);
	int a[len];

	for(i=0; i<len; i++){
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}

	int max=a[0], id=0;

	for(i=1; i<len; i++){
		if(max<a[i]){
			max = a[i];
			id=i;
		}
	}

	printf("%dth element is maximum i.e. %d\n", id, max);
}
