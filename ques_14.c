/* WAP to print Armstrong numbers from 1 to 100 */

#include <stdio.h>

int main() {

    int a ;
    printf("ENTER THE number : ");
    scanf("%d", &a);

    int n = a;

    int result = 0; 

    int count = 0;

    for( int i = a ; i != 0 ; i /= 10){
        count++;
    }

    for(int i = a ; i != 0 ; i /= 10 ){

        int remainder = i % 10;

        int power = 1;
        for(int j = 0; j < count; j++) {
            power *= remainder;
        }

        result += power;
    }

    if ((int)result == n) {
        printf("%d is an Armstrong number\n", n); 
    }

    else{
        printf("%d is not an Armstrong number\n", n);
    }

    return 0;
}