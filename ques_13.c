/* WAP to check whether a number is prime or not */

#include <stdio.h>

int main() {

    int number;
    printf("ENTER THE number: ");
    scanf("%d", &number); 

    int isPrime;

    if (number <= 1) {
        isPrime = 0;
    }
    
    else {

        for (int i = 2; i <= number / 2; i++) {

            if (number % i == 0) {
                isPrime = 0; 
                break;       
            }
        }
    }

    if (isPrime) {
        printf("The %d is a prime no\n", number);
    } 
    
    else {
        printf("The %d is not a prime no\n", number);
    }

    return 0;
}