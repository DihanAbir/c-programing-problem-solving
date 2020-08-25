/*
Question: Write a C program to check whether a triangle is Equilateral, Isosceles, or Scalene.

Time Duration: 6
*/

#include<stdio.h>

int main(){
    int h, w, l;
    scanf("%d %d %d", &h, &l, &w);
    if( h==w && h==l ){
        printf("This is an equilateral triangle.");
    }
    else if( h==w || h==l){
        printf("This is an isosceles triangle.");
    }
    else{
        printf("This is an scalene  triangle.");
    }


    return 0;
}

