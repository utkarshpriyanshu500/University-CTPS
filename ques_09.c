/* WAP to perform operations (+, -, *, /, etc.) using switch-case */

#include <stdio.h>

int main() {

    int action;
    printf("ENTER THE action no ie 1->+ , 2->- , 3->* , 4->/ : ");
    scanf("%d", &action);

    int a;
    printf("ENTER THE first number : ");
    scanf("%d", &a);

    int b;
    printf("ENTER THE second number : ");
    scanf("%d", &b);

    switch (action){
        case 1 : printf(" the sum is : %d ", a+b);
                break;

        case 2 : printf(" the sub is : %d ", a-b);
                break;

        case 3 : printf(" the mutlipilcation is : %d ", a*b);
                break;

        case 4 : printf(" the division is : %d ", a/b);
            break;

        default : printf("invild input");
        
    }
    
    return 0;
}