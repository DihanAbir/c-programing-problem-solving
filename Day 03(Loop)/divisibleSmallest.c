/*
Question: Given a number N, find smallest number which is  dividible by 3 and greater than N.

Time Duration: 35min

*/

#include<stdio.h>

int main(){
    int N ,i;
    scanf("%d", &N);

    for ( i = N+1; i<= N*N*N; i++ ){
        if( i%3 == 0 ){
            printf("%d", i);
            break;
        }

    }
    return 0;
}

