#include <stdio.h>
main(){
	int i, sum=0;

	printf("The first 10 natural number is :\n");
	
	for(i=1; i<11; i++){
		if(i != 10)
			printf("%d, ", i);
		else
			printf("%d\n", i);
		sum += i;
	}
	printf("Sum is: %d\n", sum);

}