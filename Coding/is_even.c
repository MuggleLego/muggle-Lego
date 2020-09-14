#include<stdio.h>
//input:int n
//function:if n is even,return 1;otherwise return 0;

int is_even(int n){
  return !n&1;
}

int main(){
  int n;
  scanf("%d",n);
  printf("%d\n",is_even(n));
  return 0;
}
