/*
Question:
A bus can carry maximum K person at a time. How many buses are needed to carry N person?
Time Duration: 45 :(

*/

#include<stdio.h>

int main(){
    int k, N;
    float countBus;
    scanf("%d %d", &k, &N);
    countBus = ceil((float)k/N);
    printf("%.0f",countBus);



    return 0;
}
