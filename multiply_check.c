#include <stdio.h>
int main(){
	int a, b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);

	if(!(a%b) || !(b%a))
		printf("They are multiplied.\n");
	else
		printf("They are not multiplied.\n");
	
	return 0;

}
