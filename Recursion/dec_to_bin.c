#include<stdio.h>
//function:input a decimal and output its binary form

void to_bin(int n){
        int r=n%2;
        if(n>=2)
                to_bin(n/2);
        putchar(r?'1':'0');
}

int main(){
        int n;
        scanf("%d",&n);
        to_bin(n);
        return 0;
}
