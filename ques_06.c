/* WAP to find the greatest of three numbers */

#include <stdio.h>

int main() {

    int a;
    printf("ENTER THE first number : ");
    scanf("%d", &a);

    int b;
    printf("ENTER THE second number : ");
    scanf("%d", &b);

    int c;
    printf("ENTER THE third number : ");
    scanf("%d", &c);

    if( a > b && a > c ){
        printf("%d is greater \n " , a);
    }

    else if( b > a && b > c ){
        printf("%d is greater \n " , b);
    }

    else if( c > a && c > b ){
        printf("%d is greater \n " , c);
    }

    else{
        printf(" invalid input");
    }

    return 0;
}