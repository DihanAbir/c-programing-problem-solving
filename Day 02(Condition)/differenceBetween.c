/*
Question: Find the absolute difference between the two numbers.
Time Duration: 5
*/

#include<stdio.h>

int main(){
    int a, b, diff;
    scanf("%d %d", &a ,&b);
    if(a>b){
        diff = a - b;
        printf("%d", diff);
    }
    else{
        diff = b - a;
        printf("%d", diff);}

    return 0;
}

