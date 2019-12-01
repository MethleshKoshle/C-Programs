#include <stdio.h>
void main(){
	int n1, n2, d1=0, d2=0, flag=1;

	scanf("%d %d", &n1, &n2);

	int i=n1, j=n2;
	while(flag){
		if(i!=0){
			i /= 10;
			d1++;
		}
		if(j!=0){
			j /= 10;
			d2++;
		}
		if(!(i) && !(j))
			flag=0;
	}
	int a[d1], b[d2], c[d1][d1+d2-1];
	for(i=0; i<d1; i++){
		a[i]=n1%10;
		n1 /= 10;
	}
	for(i=0; i<d2; i++){
		b[i]=n2%10;
		n2 /= 10;
	}
	for(i=0; i<d1; i++)
		for(j=0; j<d2+d1-1; j++)
				if(j>=i && j<d2+i)
					c[i][j] = a[i]*b[j-i];
				else
					c[i][j] = 0;

	int sum, carry=0, ab[d1+d2-1];
	for(i=0; i<d1+d2-1; i++){
		sum = 0;
		for(j=0; j<d1; j++)
			sum += c[j][i];
		sum += carry;
		carry = sum/2;

		ab[i] = sum%2;
		
	}
	for(i=d1+d2-2; i>=0; i--)
		printf("%d", ab[i]);
	printf("\n");
}
