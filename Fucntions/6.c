#include <stdio.h>

int deci_to_bin(int n){
  int length=0, x=n;
  do{
    x/=2;
    length++;
  }while(x);

  int arr[length], i=0;
  // 10 - 1010
  // arr = {0, 1, 0, 1} = 0 + 10 + 0 + 1000 = 1010
  while(i<length){
    arr[i]=n%2;
    n/=2;
    i++;
  }
  int num=0, fact=1;
  for(int i=0; i<length; i++){
    num+=fact*arr[i];
    fact*=10;
  }
  return num;
}
int main(){
  int n=10;
  int bin=deci_to_bin(n);
  printf("The binary value is %d\n", bin);
  return 0;
}
