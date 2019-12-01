#include <stdio.h>
main(){
	int num, i, count=0;
	printf("Enter a number: ");
	scanf("%d", &num);
	int temp=num, flag=1;

	while(temp!=0){
 		temp /= 10;
		count++;
	}
	temp = num;

	int arr[count];
	for(i=0; i<count; i++){
		arr[i] = num%10;
		num /= 10;
	}
	for(i=0; i<count/2; i++)
		if(arr[i] != arr[count-i-1]){
			flag = 0;
			break;
		}

	if(flag)
		printf("%d is palindrome.\n", temp);
	else
		printf("%d is not a palindrome\n", temp);


}