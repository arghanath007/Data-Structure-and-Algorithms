#include<bits/stdc++.h>

using namespace std;

vector<string> readBinaryWatch(int turnedOn) 
{
    
}

int main()
{
    int ledCount;
    cout<<"Enter the LED count(1-10): ";
    cin>>ledCount;
    vector<string> result=readBinaryWatch(ledCount);
    for(int i=0;i< result.size();i++)
    {
        cout<<result[i]<<" ";
    }
}

//Haven't understood backtracking yet.