#include <stdio.h>
#include <string.h>
#include <stdlib.h>
const int max_len = 100;
_Bool anagram(char str1[], char str2[], int n){
  int freq_str1[26], freq_str2[26];
  memset(freq_str1, 0, sizeof(freq_str1));
  memset(freq_str2, 0, sizeof(freq_str2));
  for(int i=0; i<n; i++){
    freq_str1[str1[i]-'a']++;
    freq_str2[str2[i]-'a']++;
  }
  _Bool flag=1;
  for(int i=0; i<26; i++){
    if(freq_str1[i]!=freq_str2[i]){
      flag=0;
      break;
    }
  }
  return flag;
}
int main(){
  char x[max_len], y[max_len];
  printf("Enter first string: ");
  scanf("%s", x);
  printf("Enter second string: ");
  scanf("%s", y);
  int n=0;
  for(int i=0; ; i++){
    if(x[i]=='\0' || x[i]=='\n'){
      break;
    }
    n=i+1;
  }
  if(anagram(x, y, n)){
    printf("%s and %s are Anagram.\n", x, y);
  }
  else{
    printf("%s and %s are not Anagram.\n", x, y);
  }
  return 0;
}
