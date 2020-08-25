/*
Question: Input a word and copy it in another string.

Time Duration:

*/

#include<stdio.h>

int main(){

    int i ;
    char str1[100], str2[100] ;
    scanf("%s", &str1);

    for ( i = 0; str1[i]!= '\0'; i++ ){
        str2[i] = str1[i];
    }
    str2[i] = '\0';

       printf("%s", str2);



    return 0;
}

