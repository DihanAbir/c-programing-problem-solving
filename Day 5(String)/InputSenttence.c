/*
Question:  How to input a sentence.

Time Duration: 3min

*/

#include<stdio.h>

int main(){

    char sent[100];
    scanf("%[^\n]",sent);
   printf("%s\n",sent);

    return 0;
}

