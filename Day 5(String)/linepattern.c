/*
Question: Input N and M. Print N lines where every line contains M stars.

Time Duration: 3 min,

*/

#include<stdio.h>

int main(){
    int N, M, i, j;
    scanf(" %d %d", &N, &M);

    for ( i=0; i<N; i++ ){
        for ( j=0; j<M; j++ ){
            printf("*");
        }
        printf("\n");

    }
    return 0;
}


