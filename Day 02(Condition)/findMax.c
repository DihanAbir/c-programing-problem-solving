/*
Question: Write a C program to find the maximum between two numbers.
Time Duration:3min

*/

#include<stdio.h>

int main(){

    int a, b;
    scanf("%d %d", &a, &b);
    if ( a>b ){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }

    return 0;
}


