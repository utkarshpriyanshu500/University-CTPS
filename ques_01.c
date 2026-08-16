/* WAP to calculate the area and circumference of a circle. */

#include <stdio.h>

float area_circle( float radius);

int main() {

    float radius ;
    printf("ENTER THE radius: ");
    scanf("%f", &radius);

    float final_area;
    final_area = area_circle(radius);
    printf(" THE AREA OF CIRCLE HAVING %f RADIUS IS : %f \n" , radius , final_area);

    return 0;
}

float area_circle( float radius ){
    return 3.14 * radius * radius;
}