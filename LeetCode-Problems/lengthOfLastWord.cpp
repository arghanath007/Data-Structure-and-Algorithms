#include<bits/stdc++.h>

using namespace std;

vector<int> plusOne(vector<int>& digits)
{
    for(int i=digits.size()-1;i>=0;i--)
    {
        if(digits[i] < 9)
        {
            digits[i]++;
            return digits;
        }
        digits[i]=0;
    }
    vector<int> newDigits(digits.size()+1);
    newDigits[0]=1;
    return newDigits;
}
int main()
{
    int size,number;
    cout<<"Enter the size: ";
    cin>>size;
    vector<int> digits,result;
    cout<<"Enter the elements: ";
    for(int i=0;i< size;i++)
    {
        cin>>number;
        digits.push_back(number);
    }
    result=plusOne(digits);
    for(int i=0;i< result.size();i++)
    {
        cout<<result[i]<<" ";
    }
}
