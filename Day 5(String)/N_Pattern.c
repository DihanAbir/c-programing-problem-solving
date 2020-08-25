/*
Question: Input a value N and print N lines in following way.

Time Duration: 8min

*/

#include<stdio.h>

int main(){
    int N, i, j;
    scanf("%d",&N);

    for ( i=1; i<=N; i++ ){
        for ( j = 1; j<=i; j++ ){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}

