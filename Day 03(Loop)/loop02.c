/*
Question:Input an integer N. Find the sum of odd numbers - 1+3+5+...+N.


Time Duration:

*/

#include<stdio.h>

int main(){
    int N, i, sum;
    sum = 0;
    scanf("%d",&N);
    for(i=1; i<=N;i++){

        if( i%2!=0 ){
            sum = sum + i;
        }

    }
        printf("%d", sum);

    return 0;
}



