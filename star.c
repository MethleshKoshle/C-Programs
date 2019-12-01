#include <stdio.h>
void main(){
    int i, j;
    int num; 
    scanf("%d", &num);
    
    for(i=0; i<num; i++){
        for(j=0; j<num-i+1; j++)
            printf(" ");
        for(j=0; j<2*i+1; j++)
            printf("*");
        printf("\n");
    }
}
