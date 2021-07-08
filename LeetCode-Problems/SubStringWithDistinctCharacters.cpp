#include<bits/stdc++.h>

using namespace std;

bool isValid(string str, int i)
{
    if(str[i-1] != str[i] && str[i] != str[i+1] && str[i+1] != str[i-1])
    {
        return true;
    }
    return false;
}

int countGoodSubstrings(string s) 
{
    int result=0;
    for(int i=1;i< s.length()-1;i++)
    {
        if(isValid(s,i))
        {
            result++;
        }
    }
    return result;
}
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    cout<<countGoodSubstrings(str)<<endl;
}