#include<bits/stdc++.h>

using namespace std;

bool checkZeroOnes(string s)
{
    int zeroCount=0,oneCount=0, ones=0, zeroes=0;
    for(int i=0;i< s.length();i++)
    {
        if(s[i]== '1')
        {
            ones++;
            zeroes=0;
        }
        else
        {
            zeroes++;
            ones=0;
        }
        zeroCount= max(zeroCount, zeroes);
        oneCount= max(oneCount, ones);
    }
    return (oneCount > zeroCount);
}

int main()
{
    string numbers;
    cout<<"Enter the numbers: ";
    getline(cin, numbers);
    bool result=checkZeroOnes(numbers);
    if(result)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}