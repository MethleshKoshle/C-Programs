#include <stdio.h>

int main() {
    int row, col;
    int size;
    printf("Input the size of the square matrix: ");
    scanf("%d", &size);

    int m1[size][size], m2[size][size];
    printf("Input elements in the first matrix:\n");
	for(row=0; row<size; row++)
    	for(col=0; col<size; col++){
           printf("Element [%d][%d]: ", row, col);
           scanf("%d", &m1[row][col]); 
        }

    printf("\nInput elements in the second matrix:\n");
    for(row=0; row<size; row++)
        for(col=0; col<size; col++){
           printf("Element [%d][%d]: ", row, col);
           scanf("%d", &m2[row][col]);
           m2[row][col] += m1[row][col];
        }

    printf("\nFirst matrix is:\n");
    for(row=0; row<size; row++){
        for(col=0; col<size; col++)
            printf("%d ", m1[row][col]);
        printf("\n");
    }

    printf("Second matrix is:\n");
    for(row=0; row<size; row++){
        for(col=0; col<size; col++)
            printf("%d ", m2[row][col]-m1[row][col]);
        printf("\n");
    }

    printf("\nSum of matrix 1 and 2 is:\n");
	for(row=0; row<size; row++){
    	for(col=0; col<size; col++)
    		printf("%d ", m2[row][col]);
    	printf("\n");
	}

    return 0;
}