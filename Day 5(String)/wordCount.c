/*
Question:Input two words and check both words are the same or not.
Time Duration:`15min,

*/

#include<stdio.h>

int main(){
    int i, count = 0, length = 0;
    char str1[100], str2[100];
    scanf("%s %s", &str1, &str2);

    for ( i = 0; str1[i] != '\0'; i++ ){
        length ++;
        if ( str1[i] == str2[i] ){
            count++;
        }
    }

    if(length == count){
        printf("Yes \n");
    }
    else
    {

      printf("No \n");

    }

    return 0;
}

