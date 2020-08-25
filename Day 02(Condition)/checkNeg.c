/*
Question:
Write a C program to check whether a number is negative, positive, or zero.

Time Duration: 4min

*/

#include<stdio.h>

int main(){

    int X;
    scanf("%d", &X);
    if( X >=0 ){
        if(X==0){
            printf("0");
        }
        else{
            printf("positive number.");
        }
    }
    else{
        printf("negative number.");
    }

    return 0;
}

