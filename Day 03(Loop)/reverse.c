/*
Question:Input an integer N. Revrese the integer N.

Time Duration: 25

*/

#include<stdio.h>

int main(){

    int N, dig, rev =0 ;
    scanf("%d", &N);

    while(N>0){
        dig = N%10;
        N = N/10;
        rev = (rev*10) + dig;
    }
    printf("%d", rev);

    return 0;
}

