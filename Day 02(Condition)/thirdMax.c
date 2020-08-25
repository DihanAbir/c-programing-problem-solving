/*
Question:Write a C program to find the third maximum between four numbers.

Time Duration: 30

*/

#include<stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a>b && a>c && a>d){
        if(b>c && b>d){
            if(c>d){
                printf("%d", c);
            }
            else{
                printf("%d", d);
            }
        }
        else if (c>b && c>d){
                if(b>d){
                    printf("%d", b);
                }
                else{
                    printf("%d", d);
                }

        }
        else{
             if(b>c){
                    printf("%d", b);
                }
                else{
                    printf("%d", c);
                }
        }
    }

    else if(b>a && b>c && b>d){
        if(a>c && a>d){
            if(c>d){
                printf("%d", c);
            }
            else{
                printf("%d", d);
            }
        }

        else if(c>a && c>d){
             if(a>d){
                    printf("%d", a);
                }
                else{
                    printf("%d", d);
                }
        }

        else{
            if( a>c){
                printf("%d", a);
            }
            else{
                printf("%d", c);
            }
        }

    }

    else if(c>a && c>b && c>d){
        if(a>b && a>d){
            if(b>d){
                printf("%d", b);
            }
            else{
                printf("%d", d);
            }
        }

        else if(b>a && b>d){
             if(a>d){
                    printf("%d", a);
                }
                else{
                    printf("%d", d);
                }
        }

        else{
            if( a>b){
                printf("%d", a);
            }
            else{
                printf("%d", b);
            }
        }

    }
    else {
        if(a>b && a>c){
            if(b>c){
                printf("%d", b);
            }
            else{
                printf("%d", c);
            }
        }

        else if(b>a && b>c){
             if(a>c){
                    printf("%d", a);
                }
                else{
                    printf("%d", c);
                }
        }

        else{
            if( a>b){
                printf("%d", a);
            }
            else{
                printf("%d", b);
            }
        }

    }


     return 0;
}
