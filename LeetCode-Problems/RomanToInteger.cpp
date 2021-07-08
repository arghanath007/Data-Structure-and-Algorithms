#include<bits/stdc++.h>

using namespace std;

int romanToInt(string s)
{
    if(s.empty())
    {
        return 0;
    }
    unordered_map<char, int> table={
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };
    int totalSum=0;
    for(int i=0; i< s.length()-1;i++)
    {
        if(table[s[i]] < table[s[i+1]])
        {
            totalSum-=table[s[i]];
        }
        else
        {
            totalSum+=table[s[i]];
        }
    }
    totalSum+=table[s.back()];
    return totalSum;
}

int main()
{
    string roman;
    cout<<"Enter a number in roman: ";
    getline(cin, roman);
    cout<<romanToInt(roman);
}