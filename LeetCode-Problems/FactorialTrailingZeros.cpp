#include<bits/stdc++.h>

using namespace std;

int trailingZeroes(int n) 
{
    //Multiplication

    int result=0;
    for(int i=5; n/i >0 ;i*=5)
    {
        result+= (n/i);
    }
    return result;

    // int count=0;
    // while(n!=0)
    // {
    //     int temp= n/5;
    //     count+=temp;
    //     n=temp;
    // }
    // return count;
}

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<trailingZeroes(number);
}