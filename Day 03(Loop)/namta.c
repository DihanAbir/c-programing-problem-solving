/*
Question: Given N. print the "namta" of N.
Time Duration: 4
*/

#include<stdio.h>

int main(){
    int N, i, mult;
    scanf("%d", &N);
    for( i =1; i <= 10; i++ ){
        mult = N*i;
        printf("%d x %d = %d; \n", N, i, mult);
    }

    return 0;
}

