//  WAP to sort an array in ascending order using Bubble Sort

#include <stdio.h>

int binarysearch(int a[] , int n , int key){

    int low=0 , high=n-1;

    while(low <= high){
        int mid = low + (high -  low)/2;

        if(a[mid] == key){
            return mid;
        }
        else if(a[mid]<key){
            low = mid +1;
        }
        else{
            high = mid-1;
        }
    }

    return -1;
}

int main() {

    int a[100] , n , key , i;

    printf(" enter the size of array : ");
    scanf("%d",&n);

    printf(" enter elemnts ");
    for(i=0 ; i<n ; i++){ 
        scanf("%d",&a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result= binarysearch(a,n,key);
    printf(" INDEX = %d" , result);

    return 0;
}