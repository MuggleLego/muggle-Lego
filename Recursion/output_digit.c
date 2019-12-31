//input:an integer
//function:print its digits respectively

#include<stdlib.h>
#include<stdio.h>

void test(int n){
        if(n>0){
                test(n/10);
                printf("%d ",n%10);
        }
}


int main(){
        int n;
        scanf("%d",&n);
        test(n);
        return 0;
}
