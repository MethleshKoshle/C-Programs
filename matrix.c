#include <stdio.h>

int main() {
    int matrix[3][3], row, col;
	for(row=0; row<3; row++)
    	for(col=0; col<3; col++){
           printf("Element [%d][%d]: ", row, col);
           scanf("%d", &matrix[row][col]); 
        }
    printf("\nMatrix is:\n");
	for(row=0; row<3; row++){
    	for(col=0; col<3; col++)
    		printf("%d ", matrix[row][col]);
    	printf("\n");
	}

    return 0;
}