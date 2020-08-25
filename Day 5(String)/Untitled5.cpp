#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sroot(int num);
long int sroot(long int num);
double sroot(double num);




int main()
{

        cout<<"enter a int number  ";
        int a;
        cin>>a;
        cout<<sroot(a)<<"\n";

        cout<<"enter a long int number  ";
        long int b;
        cin>>b;
        cout<<sroot(b)<<"\n";


        cout<<"enter a double number  ";
        double c;
        cin>>c;
        cout<<fixed << setprecision(6)<<sroot(c)<<"\n";

}





int sroot(int num)
{

    return sqrt(num);
}
long int sroot(long int num)
{

    return sqrt(num);
}
double sroot(double num)
{

    return sqrt(num);
}
