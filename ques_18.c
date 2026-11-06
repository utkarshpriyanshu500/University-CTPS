// WAP to add and multiply two matrices of order m × n.

#include <stdio.h>

int main() {

   int a[10][10] , b[10][10] , c[10][10];
   int r1 , r2 , c1, c2;
   int i , j;

   printf(" no of rows and columns for [A] = ");
   scanf("%d %d",&r1 ,&c1 );

   printf(" no of rows and columns for [B] = ");
   scanf("%d %d",&r2 ,&c2 );

   if(c1 != r2) {
        printf("Matrix multiplication is not possible");
        return 0;
    }

   printf("ENTER THE ELEMENTS FOR [A]:- \n");
   for(i=0 ; i<r1 ; i++){
    for(j=0 ; j<c1 ; j++){
        scanf("%d", &a[i][j]);
    }
   }

   printf("ENTER THE ELEMENTS FOR [B]:- \n");
   for(i=0 ; i<r2 ; i++){
    for(j=0 ; j<c2 ; j++){
        scanf("%d", &b[i][j]);
    }
   }

   for(i=0 ; i<r1 ; i++){
    for(j=0 ; j<c2 ; j++){
       c[i][j] = a[i][j] * b[i][j];
       printf("%d \t" , c[i][j]);
    }
    printf("\n");
   }

    return 0;
}