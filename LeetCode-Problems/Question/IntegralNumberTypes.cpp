#include<bits/stdc++.h>

using namespace std;

int main()
{
    //Primary Integral Data types.
    //This are by default signed data types which means they can store both +ve as well as -ve numbers.
    short a;
    int b; //Atleast 16bits usually 32bits
    long c; //Atleast 32bits
    long long d; //Atleast 64bits

    //short <= int <= long <= long long

    //Unsigned Counter parts. 
    //This can only store +ve numbers but the range gets doubled in the positive range. So if we only need positive numbers then we can use unsigned to increase the Max integer range.
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    //The output is in bytes. So 1byte = 8bits. 
    //sizeOf is actually an operator not a function.

    // cout<<sizeof(a)<<endl; 
    // cout<<sizeof(b)<<endl;
    // cout<<sizeof(c)<<endl;
    // cout<<sizeof(d)<<endl;

    cout<<SHRT_MAX<<endl; //Signed Number or value(Positive max).
    cout<<SHRT_MIN<<endl; //(Positive min)
    cout<<USHRT_MAX<<endl; // Unsigned Number(Positive Max). Double of 'SHRT_MAX'
    cout<<INT_MAX<<endl;
    cout<<INT_MIN<<endl;
    cout<<UINT_MAX<<endl;

}