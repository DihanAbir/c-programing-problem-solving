/* question: Suppose a string S of lenth L.Just check S[i] vowels(A,a,E,e,I,i,O,o,U,u) or not,if S[i] is not vowels just print it.

Time: 10 min*/

#include<stdio.h>

int main()
{
   char S[1000];
    int i,al =0,di =0,sp =0;

    gets(S);


    for(i=0;S[i]!='\0';i++)
    {
        if((S[i]>='a' && S[i]<='z') || (S[i]>='A' && S[i]<='Z'))
        {
            al++;
        }
        else if(S[i]>='0' && S[i]<='9'){
            di++;
        }
        else{
            sp++;
        }
    }

    printf("Alphabet : %d\n",al);
    printf("Digit : %d\n",di);
    printf("Special: %d\n",sp);

}
