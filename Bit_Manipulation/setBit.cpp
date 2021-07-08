#include<bits/stdc++.h>

using namespace std;

int setBits(int n, int pos)
{
    return (n | (1<<pos));
}

int main()
{
    int number,position;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter the position: ";
    cin>>position;
    cout<<setBits(number,position);
    
    // cout<<getBits(5,2)<<endl;
    
    return 0;
}