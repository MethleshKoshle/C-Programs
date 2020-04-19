/* Problem: Given four real numbers from user find difference between maximum and minimum of these numbers.
   answer=max(a, b, c, d)-min(a, b, c, d)
*/
#include <stdio.h>
int main(){
    float a, b, c, d, max, min;
    printf("Input four numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    max = a;
    min = a;
    
    if(a<=b){
        max = b;
        if(b<=c)
            max = c;
    }
    else if(a<=c)
        max = c;
    
    if(a>=b){
        min = b;
        if(b>=c)
            max = c;
    }
    else if(a>=c)
        max = c;

    if(max<=d)
    	max = d;
    if(min>=d)
    	min = d;
    // printing the answer upto 4 digits after decimal
    printf("Difference is: %.4f\n", max-min);
	return 0;
}
