/*
Question: Given two number X and N. Find the digit sum of all numbers between X to N where X<=N.

Time Duration: 35min

*/

#include<stdio.h>

int main(){

      int N, X, k, sum=0;

    scanf("%d %d",&N, &X);

    for(int i=N; i<=X; i++)
    {
        int temp = 0;

        N=i;
        while(N>0)
        {
            k = N%10;
            temp += k;
            N /= 10;
        }

        sum += temp;
    }

    printf("%d \n",sum);

    return 0;
}

