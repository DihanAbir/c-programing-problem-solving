/*
Question:  Write a C program to check whether a given integer is odd or even.
Time Duration: 4

*/

#include<stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    if(x%2==0){
        printf("%d is an even integer \n", x);
    }

    else{
        printf("%d is an odd integer \n", x);
    }

    return 0;
}

