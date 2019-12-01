#include <stdio.h>
int main(){
	int num, init;
	
	printf("The original number = ");
	scanf("%d", &num);
	init = (num%10)*1000 + ((num/10)%10)*100 + ((num/100)%10)*10 + num/1000;

	printf("The reverse of the said number = ");
	if(num%10==0)
		printf("0");
	if(num%100==0)
		printf("0");
	if(num%1000==0)
		printf("0");

	printf("%d\n", init);

	return 0;
}