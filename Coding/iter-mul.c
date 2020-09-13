#include<stdio.h>
//input:int x,y
//output:x*y
//comment:a simple multiply function

int iter_mul(int x,int y){
  int ret = 0;
  while(y){
      if(y&1)
        ret += x;
       y >>= 1;
       x <<= 1;
  }
  return ret;
}

int main(){
  printf("%d %d %d\n",iter_mul(3,20),iter_mul(123,51),iter_mul(0,99));
  return 0;
}
