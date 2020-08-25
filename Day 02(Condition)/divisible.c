/*
Question: Given two numbers N and X. Find N is divisible by X or not.

Time Duration: 4min.

*/

#include<stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x , &y);
    if (x%y == 0){
        printf("Yes");
    }
    else{
        printf("No");

    }

return 0;
}
