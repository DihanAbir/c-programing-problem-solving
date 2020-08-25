/*
Question: Input a value N and print N lines in following way.

Time Duration: 2 min

*/

#include<stdio.h>

int main(){

     int row, col, N;
    scanf("%d", &N);
    for ( row = 1; row <= N; row++ )
    {

        for ( col = 1; col <= N-row; col++ ){
            printf(" ");
        }
        for ( col = 1; col<= 2*row-1; col++  ){
            printf("*");
        }
        printf("\n");

    }
     for ( row = N-1; row >= 1; row-- )
    {

        for ( col = 1; col <= N-row; col++ ){
            printf(" ");
        }
        for ( col = 1; col<= 2*row-1; col++  ){
            printf("*");
        }
        printf("\n");

    }

    return 0;
}
