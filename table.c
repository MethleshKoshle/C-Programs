#include <stdio.h>
main(){
	int num, i=0, id=1;
	printf("Enter n: ");
	scanf("%d", &num);

	while(id){
		printf("%dX%d = %d\n", num, ++i, num*i+num);
		if(i==10)
			id = 0;
	}
}