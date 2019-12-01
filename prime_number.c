#include <stdio.h>
main(){
	int num, i, count=0;
	printf("Enetr a number: ");
	scanf("%d", &num);;

	for(i=1; i<=num; i++){
		if(num%i==0){
			count++;
			if(count==3)
				break;
		}
	}
	if(count==2)
		printf("%d is a prime number.\n", num);
	else
		printf("%d is not a prime number.\n", num);

}

// #include<stdio.h>
// int main(){
// 	int i, a, b;
// 	printf("Enter the number: ");
// 	scanf("%d", &a);
    
//     if(a<2)
//         printf("%d is not a prime number",a);
// 	else if(a==2)
//        printf("2 is a prime.");
//     else{
//     	for(i=2;(a%i)!= 0 ; i++)
//     		;
//     	if(i == a)
//     		printf("%d is a prime number.",a);
//     	else
//     		printf("%d is not a prime number",a);
//     }

// 	return 0;
// }