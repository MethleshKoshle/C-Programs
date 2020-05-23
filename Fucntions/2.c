#include <stdio.h>

double sqr(double x){
  double y=x*x;
  return y;
}
int main(){
  double num=30;
  printf("The square of %lf is %lf\n", num, sqr(num));
  return 0;
}
