#include <stdio.h>

void main(){
     float w1, w2;
     int n1, n2;

     printf("Weight-item1: ");
     scanf("%f", &w1);
     printf("No. of item1: ");
     scanf("%d", &n1);

     printf("Weight-item2: ");
     scanf("%f", &w2);
     printf("No. of items2: ");
     scanf("%d", &n2);

     float avg_value;
     avg_value = (w1*n1 + w2*n2)/(n1 + n2);
     printf("Average Value = %f\n", avg_value);
}
