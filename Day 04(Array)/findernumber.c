/*
Question: Write a program to find whether a number is there in an array or not.

Time Duration: 22min

*/

#include<stdio.h>
int main(){
    int   i, n, finder, count = 0;
    int arr1[ 100 ];
    scanf("%d", &n);

    for( i=0; i<n; i++ ){
        scanf("%d", &arr1[i]);
    }

    printf("\n \n \n");
    scanf("%d", &finder);

    for ( i=0; i<n; i++ ){
            if( arr1[i] == finder ){
                count++;
            }

    }
    if ( count>0  ){
        printf("%d is exist there", finder);
    }
    else{
        printf("%d is not exist there", finder);

    }

    printf("\n");


    return 0;
}

