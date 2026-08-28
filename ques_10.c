/* WAP to find the factorial of a number */

#include <stdio.h>

int main() {
    int number;
    printf("ENTER THE number : ");
    scanf("%d", &number);

    int fact;
    fact=1;

    for(int i = 1 ; i <= number ; i++){
        fact = fact * i;
    }

    printf("the factorial of %d is : %d \n", number , fact);

    return 0;
}