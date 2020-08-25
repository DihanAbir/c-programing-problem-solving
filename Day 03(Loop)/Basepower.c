/*
Question:Given N, find X and A where N = X*2^A.

Time Duration: 30

*/

#include<stdio.h>

int main(){
    int i, N, M = 36, carry, temp, RM=0;
    //scanf("%d %d", &N ,&M);

    //reverse M
   for ( i=M; i>0; i-- ){

    M = M/10;
    carry = M%10;
    RM = ( RM*10 ) + carry;

   }
   printf("RM: %d", &RM);


    return 0;
}

