/*
Question: Input a word and count its length without using built-in library.

Time Duration: 12min;

*/

#include <stdio.h>
int main() {
    int i, length = 0;
    char str[100] ;
    scanf("%s", &str);


    for (i = 0; str[i] != '\0'; ++i){
        length++;
    }

    printf("%d \n", length);
    return 0;
}
