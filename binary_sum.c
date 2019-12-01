#include <stdio.h>

main(){
	int i=0, n1, n2;
	printf("Enter num1: ");
	scanf("%d", &n1);
	printf("Enter num2: ");
	scanf("%d", &n2);

	int n=n1;
	while(n!=0){
		n /= 10;
		i++;
	} 
	int d1=i;
	n = n2;
	i=0;
	while(n!=0){
		n /= 10;
		i++;
	}
	int d2=i;
	int max=d2;

	if(d1>d2)
		max=d1;
	int a[max], b[max];

	if(!d1 && !d2)
		max=1;

	for(i=0; i<max; i++){
		a[i] = n1%10;
		b[i] = n2%10;
		n1 /= 10;
		n2 /= 10;
	}

	printf("\nFirst Binary number: ");
	for(i=max-1; i>-1; i--)
		printf("%d", a[i]);
	
	printf("\nSecond Binary number: ");
	for(i=max-1; i>-1; i--)
		printf("%d", b[i]);

	printf("\nTheir sum: ");
	int carry=0, sum=0;
	for(i=0; i<max; i++){
		sum = (a[i]+b[i]+carry)%2;
		carry = (int) (a[i]+b[i]+carry)/2;
		a[i] = sum;
	}
	a[i] = carry;
	n = i;

	for(i=n; i>-1; i--)
		printf("%d", a[i]);
	printf("\n");
}