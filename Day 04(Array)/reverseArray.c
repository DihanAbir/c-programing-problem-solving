/*
Question: Given a list of numbers. Save the numbers in an Array. Finally, reverse the array elements and output in
a line separated by space.

Time Duration:

*/

#include<stdio.h>

int main(){
    int size, i;
    int arr[100];

    scanf("%d", &size);
    for ( i=0; i<size; i++ ){
        scanf("%d", &arr[i]);
    }
    printf("\n");

    for ( i=size-1; i>=0; i-- ){
        printf("%d ", arr[i]);
    }

    return 0;
}

