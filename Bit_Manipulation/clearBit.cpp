#include<bits/stdc++.h>

using namespace std;

int clearBits(int n, int pos)
{
    int mask= ~(1<<pos); //Storing the 1's complement of (1<<pos). The symbol '~' is used for finding 1's complement here.
    return (n & mask);
}

int main()
{
    int number,position;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter the position: ";
    cin>>position;
    cout<<clearBits(number,position);

    return 0;
}