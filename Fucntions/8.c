#include <stdio.h>

int max(int arr[], int n){
  int mx=arr[0];
  for(int i=1; i<n; i++){
    if(mx<arr[i]){
      mx=arr[i];
    }
  }
  return mx;
}
int max_ptr(int *ptr, int n){
  int mx=*ptr;
  ptr++;
  for(int i=1; i<n; i++){
    if(mx < *ptr){
      mx = *ptr;
    }
    ptr++;
  }
  return mx;
}
int main(){
  int n;
  printf("Enter size of array: ");
  scanf("%d", &n);
  int array[n];
  for(int i=0; i<n; i++){
    scanf("%d", &array[i]);
  }
  printf("Maximum of the array is %d\n", max(array, n));
  printf("Maximum of the array is %d\n", max_ptr(array, n));
  return 0;
}
