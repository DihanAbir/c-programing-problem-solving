/*
Question:2. Write a C program to find a minimum between three numbers.
Time Duration:
*/

#include<stdio.h>

int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a<b){
            if(a<c){
                printf("%d", a);
            }
            else{
                printf("%d", c);
            }
        }

    else{
            if(b<c){
                printf("%d", b);
            }
            else{
                printf("%d", c);
            }
        }

    return 0;
}

