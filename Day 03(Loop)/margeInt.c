/*
Question: Given a number N, find smallest number which is  dividible by 3 and greater than N.

Time Duration: 35min

*/

#include<stdio.h>

int main(){
    int N ,i;
    scanf("%d", &N);
 	i = N+1;
    while( i<= N*N ){
        if( i%3 == 0 ){
            printf("%d", i);
            break;
        }
	i++;

    }
    return 0;
}
