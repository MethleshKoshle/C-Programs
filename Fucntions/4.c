#include <stdio.h>

void even_or_odd(int x){
  if(x%2==1)
    printf("%d is odd number.\n", x);
  else
    printf("%d is even number.\n", x);
}
int main(){
  int n=4;
  even_or_odd(n);
  return 0;
}
