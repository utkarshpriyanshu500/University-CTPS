/* WAP to print Fibonacci series */

#include <stdio.h>

int fib( int n);

int main(){

    int n;
    printf(" ENTER THE n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");
        
    return 0;
}

int fib( int  n){
    
    if(n == 0 || n == 1){

        if(n == 0){
            return 0;
        }

        if(n == 1){
            return 1;
        }
    }
    
    return fib(n-1) + fib( n-2);
}