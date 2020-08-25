/*
Question: Write a program to copy an array into another array and print both array. (the size of the array should be taken from keyboard).

Time Duration: 25 ;

*/

#include<stdio.h>

int main(){
    int   i, n;
    int arr1[ 100 ], arr2[ 100 ];
    scanf("%d", &n);

    for( i=0; i<n; i++ ){
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }
     for ( i=0; i<n; i++ ){
        printf("%d ", arr1[i]);

    }
     printf("\n");

    for ( i=0; i<n; i++ ){
         printf("%d ", arr2[i]);

    }


    return 0;
}


