/*
Question: Write a C program to find whether a given year is a leap year or not.
Time Duration: 5

*/

#include<stdio.h>

int main(){
    int year,max;
    scanf("%d", &year);

      max = (year%100==0 || year%4==0 && year%100 != 0)? printf("leap year") : printf("Not leap year");
      printf("%d", max);
    return 0;
}

