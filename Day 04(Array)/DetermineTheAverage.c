/*
Question: Input N integers. Determine the average. Print the average with two digit after the decimal point.

Time Duration:  ;

*/

#include<stdio.h>

int main(){
    int   i, n;
    float sum=0;
    double avg;
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

