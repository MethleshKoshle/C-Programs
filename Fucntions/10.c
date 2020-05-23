#include <stdio.h>

_Bool perfect(int n){
  _Bool flag=1;
  int sum=0;
  for(int i=1; i<n; i++){
    if(n%i==0){
      sum+=i;
    }
  }
  if(sum!=n){
    flag=0;
  }
  return flag;
}
int main(){
  int l=1, r=1000;
  printf("The perfect numbers between %d to %d are:\n", l, r);
  for(int i=l; i<=r; i++){
    if(perfect(i)){
      printf("%d ", i);
    }
  }
  printf("\n");
  return 0;
}
