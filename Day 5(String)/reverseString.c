/*
Question: How to reverse a string without using any function.

Time Duration:16min

*/

#include<stdio.h>

int main(){
    int i ,length = 0;
    char str1[100], str2[100] ;
    scanf("%s", &str1);
    //printf("%s", str1);

    for ( i = 0; str1[i]!= '\0'; i++ ){
        length++;
    }
    //printf("\n%d", length);

    for( i = 0; str1[i] != '\0'; i++  ){
        str2[(length-1)-i] = str1[i];
        //printf("%s \n", str2);
    }
        printf("%s", str2);

    return 0;
}

