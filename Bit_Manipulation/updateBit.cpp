#include<bits/stdc++.h>

using namespace std;

int updateBit(int n, int pos, int updateValue)
{
    int mask= ~(1<<pos);
    n= n & mask;
    return (n | (updateValue<<pos)); // We are using 'updateValue' here because if we want to update the bit to '1' then '1' will be stored in the 'updateValue' variable and if we want to update it to '0' then the variable 'updateValue' will have a value of '0' stored in it.
}

int main()
{
    int number,position,value;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter the position: ";
    cin>>position;
    cout<<"Enter the value to which the bit is to be updated to either '1' or '0':  ";
    cin>>value;
    cout<<updateBit(number,position,value);
    char tmp; std::cin >> tmp; // To hold the cmd in place after the code runs to see the output.
    return 0;
}