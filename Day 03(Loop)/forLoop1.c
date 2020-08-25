/*
Question: Input an integer N. Print N, N-1, ......3, 2, 1.
Time Duration: 3

*/

#include<stdio.h>

int main(){

    int i,N;
    scanf("%d",&N);
    for (i=N; i>=1; i--){

        printf("%d \n",i);

    }

    return 0;
}

