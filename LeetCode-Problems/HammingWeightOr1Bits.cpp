#include<bits/stdc++.h>

using namespace std;

int hammingWeight(uint32_t n) 
{
    int count=0;
    while(n) // if n==0 then we break out and return the count of '1' bits in the number.
    {
        n&=(n-1); //n & (n - 1) drops the lowest set bit. It is a nice bit manipulation logic/trick.
        count++;
    }
    return count;
}

int main()
{
    string number;
    cout<<"Enter a positive number in bits(101101): ";
    getline(cin, number);
    cout<<stoi(number)<<endl;
    cout<<hammingWeight(stoi(number)); //This is not giving the correct but the functions is correct in the leetcode website compiler.
}

// '>>>' is for calculating unsigned bits whereas '>>' is for signed bits. So, if you are told to check unsigned you can use '>>>' and if asked to do signed you use '>>'.