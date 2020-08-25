/*
Question:Given N. Find N!.

Time Duration: 15

*/

#include<stdio.h>

int main(){
    int N, i, fact = 1;
    scanf("%d", &N);
    for ( i=N; i>=1; i-- ){
        fact = fact*i;
    }
    printf("%d",fact);

    return 0;
}

