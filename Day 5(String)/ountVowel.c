/*
Question: Input a string and print how many vowels and consonants are there.
Time Duration:

*/

#include<stdio.h>

int main(){

    char sent[100];
    int i,vowels = 0, consonant = 0;

    scanf( "%s", &sent);

    for ( i = 0; sent[i] != '\0'; ++i) {
        if (sent[i] == 'a' || sent[i] == 'e' || sent[i] == 'i' ||sent[i] == 'o' || sent[i] == 'u' || sent[i] == 'A' ||sent[i] == 'E' || sent[i] == 'I' || sent[i] == 'O' ||
            sent[i] == 'U') {
            ++vowels;
        } else if ((sent[i] >= 'a' && sent[i] <= 'z') || (sent[i] >= 'A' && sent[i] <= 'Z')) {
            ++consonant;
        }
    }
    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);

    return 0;
}

