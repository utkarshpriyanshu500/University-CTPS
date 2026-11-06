//WAP to find the sum of diagonal elements of an m × n matrix

#include <stdio.h>

int main() {
    
    int a[10][10];
    int row , col , i , j;
    int sum = 0;

    printf("ENTER THE NO OF ROWS AND COLUMN OF [A]: ");
    scanf("%d %d",&row , &col);

    if( row != col){
        printf("SUM OF DIAGONAL ELEMENTS NOT POSSIBLE");
        return 0;
    }

    printf("ENTER THE MATRIX ELEMENTS ;-");

    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0 ; i< row ; i++){
        sum = sum + a[i][i];
    }

    printf("SUM OF DIAGONAL ELEMENTS IS : %d " , sum);

    return 0;
}