/*
Question: Input an integer N. Print the following series: 1-2+3-4+5.....N .
Time Duration: 1min

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
        else{
            sum = sum - i;
        }

    }
        printf("%d", sum);

    return 0;
}

