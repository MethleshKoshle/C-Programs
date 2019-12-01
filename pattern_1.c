#include <stdio.h>
int main(){

	int i, num, j;
	printf("Enter rows: ");
	scanf("%d", &num);
	for(i=0; i<num; i+=1){
		for(j=0; j<i+1; j++)
		    printf("%d", j+1);
		printf("\n");

	}
return 0;	
}
