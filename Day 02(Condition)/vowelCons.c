/*
Question: Given a character C. Determine the character is a vowel or consonant.
Time Duration: 3min.

*/

#include<stdio.h>

int main(){
    char c;
    scanf("%ch", &c);
    if( c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ){
        printf("%c is a vowel.",c);
    }
    else{
        printf("%c is a consonant.",c);
    }

    return 0;
}

