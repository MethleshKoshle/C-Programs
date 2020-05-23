#include <stdio.h>
int factorial(int x){
  if(x==0)
    return 1;
  return x*factorial(x-1);
}
void series(int n){
  int sum=0, fact=1;
  for(int i=1; i<=n; i++){
    sum+=fact/i;
    fact*=i+1;
    // sum+=factorial(i)/i;
  }
  printf("Sum of the series is %d\n", sum);
}
int main(){
  int n=5;
  series(n);
  return 0;
}
