
/*
Question: Write a program in C to find the maximum and minimum elements in an array.
          In this problem you have to find the minimum and maximum value from a given arr

Time Duration: 15min

*/

#include<stdio.h>
int main(){
    int   i, n, max = 0, min = 1000;
    int arr1[ 100 ];
    scanf("%d", &n);

    for( i=0; i<n; i++ ){
        scanf("%d", &arr1[i]);
    }

    printf("\n \n \n");

    for ( i=0; i<n; i++ ){
            if( arr1[i] < min ){
                min = arr1[i];
            }
            else if( arr1[i] > max ){
                max = arr1[i];
            }

    }

    printf("Minimum: %d \nMaximum: %d \n", min, max);



    printf("\n");


    return 0;
}

