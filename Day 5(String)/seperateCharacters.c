/*
Question: Write a program in C to separate the individual characters from a string.

Time Duration: 18min

*/

#include<stdio.h>

int main(){

    int i;
    char str[100];
    scanf("%s", &str);
    for ( i=0; str[i] != '\0'; i++ ){
        printf("%s ", str[i]);
    }

    return 0;
}

