/*
Question: Write a program to find whether a number is there in an array or not.

Time Duration: 30min

*/

#include<stdio.h>

int main(){
    int size, i, even=0, odd=0;
    int arr[100], arrE[100], arrO[100];
    scanf("%d", &size);

    for ( i=0; i<size; i++ ){
        scanf("%d", &arr[i]);
    }
    //print enterd array:
    /*
    for ( i=0; i<size; i++){
        printf("%d ", arr[i]);
    } */

    for ( i=0; i<size; i++  ){
        if( arr[i]%2==0 ){
            arrE[even] = arr[i];
            even++;
        }
        else{
            arrO[odd] = arr[i];
            odd++;
        }
    }

    for( i=0; i<even; i++ ){
        printf("%d ", arrE[i]);
    }
    printf("\n \n");
    for( i=0; i<odd; i++ ){
        printf("%d ", arrO[i]);

    }



    return 0;
}
