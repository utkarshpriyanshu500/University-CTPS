#include <stdio.h>

int main() {

    float english, maths, physics, chemistry, cs;
    float total, percentage;

    printf("Enter marks for English: ");
    scanf("%f", &english);

    printf("Enter marks for Maths: ");
    scanf("%f", &maths);

    printf("Enter marks for Physics: ");
    scanf("%f", &physics);

    printf("Enter marks for Chemistry: ");
    scanf("%f", &chemistry);

    printf("Enter marks for CS: ");
    scanf("%f", &cs);

    total = english + maths + physics + chemistry + cs;
    percentage = total / 5;

    printf("Total Marks: %f / 500\n", total);
    printf("Percentage: %f \n", percentage);

    if (percentage >= 90) {
        printf("Grade: A+\n");
    } 
    
    else if (percentage >= 80) {
        printf("Grade: A\n");
    } 
    
    else if (percentage >= 70) {
        printf("Grade: B\n");
    } 
    
    else if (percentage >= 60) {
        printf("Grade: C\n");
    }

    else if (percentage >= 50) {
        printf("Grade: D\n");
    } 

    else {
        printf("Grade: F\n");
    }

    return 0;
}