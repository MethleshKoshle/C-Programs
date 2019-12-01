//solution 52
#include <stdio.h>
main(){
	int rows;
	printf("Enter number of lines: ");
	scanf("%d", &rows);

	int i, j, pas[rows][rows];

	for(i=0; i<rows; i++){
		for(j=0; j<rows-i; j++)
			printf(" ");
		for(j=0; j<i+1; j++){
			if(i==j || !j)
				pas[i][j] = 1;
			else
				pas[i][j] = pas[i-1][j-1] + pas[i-1][j];
			printf("%d ", pas[i][j]);
		}
		printf("\n");
	}

}
