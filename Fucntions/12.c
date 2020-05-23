#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int max(int arr[], int n){
  int mx=arr[0];
  for(int i=1; i<n; i++){
    if(mx<arr[i]){
      mx=arr[i];
    }
  }
  return mx;
}
int min(int arr[], int n){
  int mi=arr[0];
  for(int i=1; i<n; i++){
    if(mi>arr[i]){
      mi=arr[i];
    }
  }
  return mi;
}

int main(){
  int n;
  printf("Enter size: ");
  scanf("%d", &n);
  int arr[n];
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  printf("Minimum is %d\n", min(arr, n));
  printf("Maximum is %d\n", max(arr, n));
  return 0;
}
