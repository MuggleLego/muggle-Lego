#include<stdio.h>
//input:int n
//function:decide n is power of 2 or not

int is_power_of_two(int n){
  return (n>0) && (!(n&(n-1)));
}
