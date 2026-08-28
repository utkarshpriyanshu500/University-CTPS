/* WAP to print sum of even and odd numbers from 1 to N  */

#include <stdio.h>

int SUM( int n );
int SUM_ODD( int n );
int SUM_EVEN( int n );

int main() {

    int n;
    printf("ENTER THE n: ");
    scanf("%d", &n);

    printf(" the sum of number 1 to %d is : %d \n " , n , SUM(n));
    printf(" the sum of odd number 1 to %d is : %d \n " , n , SUM_ODD(n));
    printf(" the sum of even number 1 to %d is : %d \n " , n , SUM_EVEN(n));
    
    return 0;
}

int SUM(int n){

    int count = 0;

    for( int i = 0 ; i <= n ; i++){
        count = count + i;
    }

    return count;
}

int SUM_ODD( int n ){

    int count1 = 0;

    for( int i = 0 ; i <= n ; i++){

        if(i % 2 != 0){
            count1 = count1 + i;
        }
    }

    return count1;
}

int SUM_EVEN( int n ){

    int count2 = 0;

    for( int i = 0 ; i <= n ; i++){

        if(i % 2 == 0){
            count2 = count2 + i;
        }
    }

    return count2;
}