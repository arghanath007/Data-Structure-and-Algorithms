#include<bits/stdc++.h>

using namespace std;

int getBits(int n, int pos)
{
    return (n & (1<<pos))!=0;
}

int main()
{
    int number,position;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter the position: ";
    cin>>position;
    int result=getBits(number,position);
    if(result == 0)
    {
        cout<<"The Bit is zero(0) at "<<position+1;
    }
    else
    {
        cout<<"The Bit is One(1) at "<<position +1;
    }
    // cout<<getBits(5,2)<<endl;
    
    return 0;
}