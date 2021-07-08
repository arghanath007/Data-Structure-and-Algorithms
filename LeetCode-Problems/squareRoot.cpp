#include<bits/stdc++.h>

using namespace std;

int mySqrt(int x) 
{
    // return sqrt(x);
    long r=x;
    while(r*r >x)
    {
        r=(r + x/r)/2;
    }
    return r;
}

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<mySqrt(number);
}

//pow(number, 0.5), sqrt(number), x ** 0.5 are not allowed.