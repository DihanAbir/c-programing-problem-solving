/*
Question:

Even numbers are those which are divisible by 2, and which numbers are not divisible 2 is called odd numbers.

*/

#include<stdio.h>

int main(){

    int a;
    scanf("%d", &a);

    if ( a%2 == 0){
        printf("%d is even \n" , a);
    }

    else{
        printf("Odd \n");
    }
    printf("inputed value is = %d", a);

    return 0;
}

