/* WAP that checks whether the two numbers entered by the user are equal */

#include <stdio.h>

int main() {

    int a;
    printf("ENTER THE first number : ");
    scanf("%d", &a);

    int b;
    printf("ENTER THE second number : ");
    scanf("%d", &b);

    if (a == b){
        printf(" both numbers are equal");
    }

    else if (a != b){
        printf("numbers are not equal");
    }

    return 0;
}