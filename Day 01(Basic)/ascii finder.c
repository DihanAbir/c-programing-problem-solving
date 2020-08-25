#include<stdio.h>
  int a = 10;
  char b = 5;
int main(void){
char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);

     int number, result;
     clrscr();
     printf("Enter any Character/Symbol/Digits: ");
     number = getch();
     result = toascii(number);
     printf("\n  value of  %c is %d\n", number, result);
     getch();

     return 0;

}

