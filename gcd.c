#include <stdio.h>
int main(){
	int a, b, i, gcd;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);

	int min=b;
	if(b>=a)
		min = a;

    for(i=min; i>0; --i)
    	if(a%i==0 && b%i==0){
            gcd = i;
			printf("GCD is: %d\n", gcd);
            return 0;
    	}
}


// #include <stdio.h>
// int main(){
// 	int a, b, i, gcd, t;
// 	scanf("%d", &t);
// 	for(i=0; i<t; i++){
// 	    scanf("%d %d", &a, &b);

// 	    int min=b;
// 	    if(b>=a)
// 		    min = a;

//         for(i=min; i>0; --i){
//     	    if(a%i==0 && b%i==0){
//                 gcd = i;
// 			    printf("%d\n", gcd);
//                 break;
//         	}
//         }
// 	}
// 	return 0;
// }