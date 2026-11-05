// WAP to search an element in an array using Linear Search

#include <stdio.h>

int main() {
    int a[100] , n , i , key , found = 0;

    printf(" enter the size of array : ");
    scanf("%d",&n);

    printf(" enter elemnts ");
    for(i=0 ; i<n ; i++){ 
        scanf("%d",&a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {

        if(a[i] == key) {
            printf("Element found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Element not found");
    }

    return 0;
}