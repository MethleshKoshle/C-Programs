#include <stdio.h>

void swap_value(int n, int m){ // Passing by value, function makes copy of variab;e
  int tmp=n;
  n=m;
  m=tmp;
  // printf("n is %d, m is %d\n", n, m);
}
void swap_reference(int *x, int *y){ // Passing by reference, function makes copy of variab;e
  int tmp=*x;
  *x=*y;
  *y=tmp;
}
int main(){
  int n=2, m=3;
  // swap_value(n, m);
  swap_reference(&n, &m);
  printf("n is %d, m is %d\n", n, m);
  return 0;
}
