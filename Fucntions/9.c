#include <stdio.h>

_Bool armstrong(int n){
  _Bool flag=1;
  int sum=0, x=n;
  while(x){
    sum+=(x%10)*(x%10)*(x%10);
    x/=10;
  }
  if(sum!=n){
    flag=0;
  }
  return flag;
}
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
  int n=371;
  if(armstrong(n))
    printf("%d is an armstrong number\n", n);
  else
    printf("%d is not an armstrong number\n", n);

  if(perfect(n))
    printf("%d is perfect number\n", n);
  else
    printf("%d is not perfect number\n", n);
  return 0;
}
