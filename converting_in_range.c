#include <stdio.h>

int main(){
	int num;
	printf("Input an intger: ");
	scanf("%d", &num);

	if(0 <= num && num <= 20)
		printf("Range [0, 20]\n");
	else if(21 <= num && num <= 40)
		printf("Range [21, 40]\n");
	else if(41 <= num && num <= 60)
		printf("Range [41, 60]\n");
	else if(61 <= num && num <= 80)
		printf("Range [61, 80]\n");
	
	return 0;
}