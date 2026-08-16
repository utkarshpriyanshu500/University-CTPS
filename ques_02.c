/* WAP that calculates Simple Interest and Compound Interest */

#include <stdio.h>
#include <math.h>

float simple_interest ( float principal_amount , float ROI , float time );
float compound_interest ( float principal_amount , float ROI , float time );


int main() {

    float principal_amount ;
    printf("ENTER THE principal amount  : ");
    scanf("%f", &principal_amount );
       
    float ROI ;
    printf("ENTER THE rate of interest in percentage : ");
    scanf("%f", &ROI);

    float time;
    printf("ENTER THE time in years : ");
    scanf("%f", &time);

    float final_SI;
    final_SI = simple_interest(principal_amount , ROI , time );
    printf(" the simple interest for :- \n  principal amount= %f \n   rate of interest = %f \n  time = %f \n IS : \n Simple interest = %f \n ", principal_amount , ROI , time , final_SI );

    float final_CI;
    final_CI = compound_interest(principal_amount , ROI , time );
    printf(" the compound interest for :- \n  principal amount= %f \n   rate of interest = %f \n  time = %f \n IS : \n compound interest = %f \n ", principal_amount , ROI , time , final_CI );

    return 0;
}

float simple_interest ( float principal_amount , float ROI , float time ){
    int SI;
    SI = ( principal_amount * ROI * time)/100;

    return SI;   
} 

float compound_interest ( float principal_amount , float ROI , float time ){
    int CI;
    CI = principal_amount * (pow(1 + ROI / 100 , time ) -1) ;
    
    return CI;
}

