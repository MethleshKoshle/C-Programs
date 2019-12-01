#include <stdio.h>
void main(){
    int i, j;
    int num=5; 
    
    for(i=0; i<num; i++){
        for(j=0; j<num-i+1; j++)
            printf(" ");
        for(j=0; j<2*i+1; j++)
            printf("*");
        printf("\n");
    }
    for(i=num-2; i>=0; i--){
        for(j=num-i+1; j>0; j--)
            printf(" ");
        for(j=2*i+1; j>0; j--)
            printf("*");
        printf("\n");
    }
}