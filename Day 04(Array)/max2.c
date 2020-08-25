/*
Question: Write a program in C to find the second largest element in an array

Time Duration:

*/

#include<stdio.h>

int main(){

    int arr[100], size, i;
    int max1, max2;

    scanf("%d", &size);

    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = -100000;


    for(i=0; i<size; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    printf("%d", max2);

    return 0;
}


