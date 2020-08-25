/*
Question: Given a character C. Determine the character is an uppercase alphabet or lowercase alphabet or a digit.
Time Duration:

*/

#include<stdio.h>

int main(){
    char c;
    scanf("%ch", &c);
    if(c>'A' && c<'Z'){
        printf(" '%c' is uppercase alphabet.",c);
    }
    else if(c>'a' && c<'z'){
        printf(" '%c' is lower alphabet.",c);
    }
    else if(c>'0' && c <= '9'){
        printf(" '%c' is Number.",c);
    }
    else{
        printf(" '%c' is not an alphabet.",c);
    }
    return 0;
}


