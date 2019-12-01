#include <stdio.h>
int main(){
	int sec;
	printf("Input seconds: ");
	scanf("%d", &sec);
	int hrs, min;
	min = (sec/60)%60;
	hrs = sec/60/60;
	sec = sec%60;

	printf("H:M:S %d:%d:%d\n", hrs, min, sec);
	return 0;
}
