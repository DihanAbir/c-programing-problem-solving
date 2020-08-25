/*
Question: Take an input N. In the next line input N integers. Print this N integers in separate lines.

Time Duration:

*/

#include<stdio.h>

int main(){
    int n, i;
    int arr[ 100 ];
    scanf("%d", &n);

    for( i=0; i<n; i++ ){
        scanf("%d", &arr[i]);
    }

    for ( i=0; i<n; i++ ){
        printf("%d ", arr[i]);
    }

    return 0;
}

