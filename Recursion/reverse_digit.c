#include<stdio.h>
//function:input an integer and output its digits in the reverse order

void test(int n){
        if(n>0){
                printf("%d",n%10);
                test(n/10);
        }

}


int main(){
        int n;
        scanf("%d",&n);
        test(n);
        return 0;
}
