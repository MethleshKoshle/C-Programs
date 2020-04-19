/* Problem: Given an array by the user find the minimum of this array.*/
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

	int min=a[0], id=0;

	for(i=1; i<len; i++){
		if(min>a[i]){
			min = a[i];
			id=i;
		}
	}

	printf("%dth element is minimum i.e. %d\n", id, min);
}
