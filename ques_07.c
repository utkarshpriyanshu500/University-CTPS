/* WAP to accept marks of five subjects, calculate percentage, and print grades */

#include <stdio.h>

int main() {

    int english;
    printf("ENTER THE marks for english : ");
    scanf("%d", &english);

    int maths;
    printf("ENTER THE marks for maths : ");
    scanf("%d", &maths);

    int physics;
    printf("ENTER THE marks for physics : ");
    scanf("%d", &physics);

    int chemistry;
    printf("ENTER THE marks for chemistry : ");
    scanf("%d", &chemistry);

    int cs;
    printf("ENTER THE marks for cs : ");
    scanf("%d", &cs);

    int sum;
    sum = english + maths + physics + chemistry + cs;

    if(sum > 500){
        printf("invalid input");
    }

    else if (sum < 500){
        int percentage;
        percentage = (sum / 500) * 100;
        printf(" the percentage is : %d \n ", percentage);
    }

   
    return 0;
}