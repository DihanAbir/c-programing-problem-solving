/*
Question: Given the coordinate of two points p1(x1,y1) and p2(x2,y2). Find which point is closest to the center (0,0).
Time Duration: 31

*/

#include<stdio.h>
#include<math.h>

int main(){

    float ox1 =0, oy1=0, x1, x2, y1, y2, op1, op2; //ox1,oy1 is for origin;
    scanf("%f %f %f %f", &x1 ,&y1 ,&x2 ,&y2);
    op1 = sqrt( (pow((x1- ox1),2))+ (pow((y1- oy1),2)) );
    op2 = sqrt( (pow((x2- ox1),2))+ (pow((y2- oy1),2)) );
    if(op1<op2){
        printf("%.0f  %.0f",x1 ,y1);
    }
    else{
        printf("%.0f  %.0f",x2 ,y2);
    }



    return 0;
}

