#include <stdio.h>

int is_prime(int n){
  int let=1; // Let's assume n is a prime number;
  for(int i=2; i<n; i++){
    if(n%i==0){
      let=0;
      break;
    }
  }
  return let;
}
int main(){
  int x=4;
  int flag=is_prime(x);
  if(flag==1)
    printf("%d is a prime number\n", x);
  else
    printf("%d is not a prime number\n", x);
  return 0;
}
