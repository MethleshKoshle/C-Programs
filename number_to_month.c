#include <stdio.h>
int main(){
	int index;
	printf("Input a number between 1 to 12 to get the month name: ");
	scanf("%d", &index);

    if(index == 1)
    	printf("January");
    else if(index == 2)
    	printf("February");
    else if(index == 3)
    	printf("March");
    else if(index == 4)
    	printf("April");
    else if(index == 5)
    	printf("May");
    else if(index == 6)
    	printf("June");
    else if(index == 7)
    	printf("July");
    else if(index == 8)
    	printf("August");
    else if(index == 9)
    	printf("September");
    else if(index == 10)
    	printf("October");
    else if(index == 11)
    	printf("November");
    else if(index == 12)
    	printf("December");
    else
    	printf("Please enter a valid choice:\n");
    printf("\n");

	return 0;
}