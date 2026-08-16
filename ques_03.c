/* WAP to convert temperature from Centigrade to Fahrenheit */

#include <stdio.h>

float Fahrenheit ( float Centigrade );

int main() {

    float Centigrade ;
    printf("ENTER THE Centigrade : ");
    scanf("%f", &Centigrade);

    printf(" Fahrenheit is : %f" , Fahrenheit(Centigrade));

    return 0;
}

float Fahrenheit ( float Centigrade ){
    float c;
    c =  ( 9 * Centigrade / 5 ) + 32 ;
    
    return c;
}
