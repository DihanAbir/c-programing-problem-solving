    /*Problem No 01: Write a C program that takes three valid side lengths of a triangle as input.
     You must take inputs at integer data type. Print the area of that triangle with three digits after decimal point. Do typecasting if necessary.

     Time: 21min;

    */
#include<stdio.h>
int main (){
    int h, l, w;
    double area, s;
    scanf("%d %d %d", &h, &l, &w);
    s = (double)(h+l+w)/2;
    area = sqrt(s*(s - h)*(s - l)*(s - w));
    printf("%0.3lf \n", area);


    return 0;

}
