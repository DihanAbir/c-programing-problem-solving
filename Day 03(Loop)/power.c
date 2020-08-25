/*
Question: Given base B and power P. find B^P.
Time Duration: 30

*/

#include<stdio.h>
#include<math.h>

int main(){
    int B, P,i, result = 1;
    scanf("%d %d", &B, &P);
    for ( i=P; i>=1; i-- )
    {

        result = result*B;
    }
    printf("%d",result);
    return 0;
}


