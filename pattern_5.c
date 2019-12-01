//solution 50
#include <stdio.h>
#include <stdlib.h>
main(){
	int rows, id=65;
	printf("Enter number of lines: ");
	scanf("%d", &rows);

	int i, j, mid;
	for(i=0; i<rows; i++){
		mid = i;
		for(j=0; j<rows-i; j++)
			printf(" ");
		for(j=0; j<2*i+1; j++){
			if(j<=mid)
				printf("%c", id+j);
			else if(j != 2*i)
				printf("%c", id+abs(j-mid));
			else
				printf("%c", id);

		}
		printf("\n");
	}

}