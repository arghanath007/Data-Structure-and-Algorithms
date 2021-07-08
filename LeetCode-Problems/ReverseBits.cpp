#include<bits/stdc++.h>

using namespace std;

uint32_t reverseBits(uint32_t n) 
{
    //Optimized solution

    // n=(n >> 16) | (n << 16); this and the 1st line are interchangable.
    n=((n & 0xffff0000) >> 16) | ((n & 0x0000ffff) << 16);
    n=((n & 0xff00ff00) >> 8) | ((n & 0x00ff00ff) << 8);
    n=((n & 0xf0f0f0f0) >> 4) | ((n & 0x0f0f0f0f) << 4);
    n=((n & 0xcccccccc) >> 2) | ((n & 0x33333333) << 2);
    n=((n & 0xaaaaaaaa) >> 1) | ((n & 0x55555555) << 1);

    return n;


    //This is too slow for large amount of values.
    // uint32_t result=0;
    // for(int i=0;i< 32;i++)
    // {
    //     result<<=1; //Step 1 (Left shift)
    //     if((n & 1) == 1) // step 2(checking if the last bit of the number is '1' then we are adding '1' to the result, otherwise do nothing).
    //     {
    //         result++;
    //     }
    //     n>>=1;
    // }
    // return result;
}

int main()
{
    string number;
    cout<<"Enter a number in bits(100001): ";
    getline(cin, number);
    uint32_t num= stoi(number); //converts the string to number format.
    cout<<reverseBits(num);
}

//https://www.youtube.com/watch?v=-5z9dimxxmI -> Explanation