/*Problem: Given a nxn matrix check whether it's identity or not.*/
#include <stdio.h>

int main() {
    int size, row, col;
    printf("Enter size of matrix: ");
    scanf("%d", &size);

    int matrix[size][size], check=1;

    for(row=0; row<size; row++){
       for(col=0; col<size; col++){
           printf("Element [%d][%d]: ", row, col);
           scanf("%d", &matrix[row][col]);
           
           if(row==col){
           		if(matrix[row][col] != 1)
           			check = 0;
           }
           else if(matrix[row][col] != 0)
           		check = 0;
       }
    }

    printf("Matrix is:\n");
    for(row=0; row<size; row++){
       for(col=0; col<size; col++)
       		printf("%d ", matrix[row][col]); 
       	printf("\n");
    }


    if(check)
    	printf("Given matrix is an identity matrix.\n");
    else
    	printf("Given matrix is not an identity matrix.\n");

    return 0;
}
