#include<stdio.h>
//date:2019.12.28
//input:an integer n (n<=100)
//output:n's permutation
//in a recursion way

int a[100]; //array that store each permutation
int visit[100]; //array that specify if a number have been visited

//position:visiting number
//n:input
void permutation(int position,int n){
        if(position==n){ //a full permutation
                for(int i=0;i<n;i++){
                        printf("%d ",a[i]);  //print
                }
                printf("\n");
                return;
        }
        
        for(int i=1;i<=n;i++){
                if(visit[i]==0){  //the number haven't been visited
                        visit[i]=1; //specify the number
                        a[position]=i; //store the unvisited number in array a 
                        permutation(position+1,n);
                        visit[i]=0;
                }
        }
}
