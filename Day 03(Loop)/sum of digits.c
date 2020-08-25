/*
Question:Find the sum of digits of a number N.
Time Duration: 16

*/

#include<stdio.h>

int main(){
    int N, sum = 0, dig;
    scanf("%d",&N);
    while (N>0){
        dig = N%10;
        sum = sum+dig;
        N = N/10;
    }
    printf("%d", sum);

    return 0;
}

