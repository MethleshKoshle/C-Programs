#include <stdio.h>
main(){
	int num, i=0;
	printf("Input number in Decimal: ");
	scanf("%d", &num);
	int a[4];
	
	while(num != 0){
		a[i] = num%2;
		num /= 2;
		i++;	
	}
	printf("Binary representaion is: ");
	for(i=3; i>=0; i--)
		printf("%d", a[i]);
	printf("\n");
}
