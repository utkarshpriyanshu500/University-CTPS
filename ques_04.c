/* WAP to swap values of two variables using a third variable */

#include <stdio.h>

int main() {

    int a;
    printf("ENTER THE the first no : ");
    scanf("%d", &a);

    int b;
    printf("ENTER THE second no : ");
    scanf("%d", &b);

    printf(" a = %d and b = %d - nos before swapping \n " , a , b);

    int temp;

    temp  = a;
    a = b;
    b = temp;

    printf(" a = %d and b = %d - nos after swapping \n " , a , b);

    return 0;
}