#include<bits/stdc++.h>

using namespace std;

bool isPowerOfTwo(int number)
{
    return (number && !(number & number-1)); // We put number to check the edge or corner condition if the number is zero(0) then we return false which means the number is not a power of 2 which is correct. If the bitwise and(&) return false or 0 for (number & number-1) this then the number is a power of 2 but we use !(not) operator here to set it to true like !0 == 1 or !false == true like that so that we send the correct result.
}

int main()
{
    int number;
    cout<<"Enter the number to check: ";
    cin>>number;
    // cout<<isPowerOfTwo(number)<<endl;
    if(isPowerOfTwo(number))
    {
        cout<<number<<" is a power of 2"<<endl;
    }
    else
    {
        cout<<number<<" is not a power of 2"<<endl;
    }
}



// All of the numbers that are powers of 2 and we write them in binary like 8->(1000) then we will notice that only one(as count not the number one(1)) bit is set for them. If we do n-1 and let n=8 then n-1=7(0111), then in n-1 all of the other bits after the set bit in n will be set bits. Example: in 8(1000) the leftmost bit is the set bit but in n-1, 7(0111) all of the other bits to the right of the set bit in n are the set bits in n-1. n has only one set bit, and n-1 will have all set bits after that position.
// n(1000) & n-1(0111) -> 0000(0). This will always happen if we do the bitwise and(&) of n and n-1. We will always get 0 as the output. This also shows that n is a power of 2 which we are trying to find here.