#include <stdio.h>
main(){
	int i, j, temp=1, rows;
	printf("Enter n: ");
	scanf("%d", &rows);

	for(i=0; i<rows; i++){
		for(j=rows-i-1; j>=0; j--)
			printf(" ");
		for(j=0; j<i+1; j++)
			printf("%d ", temp++);
		printf("\n");
	}

}