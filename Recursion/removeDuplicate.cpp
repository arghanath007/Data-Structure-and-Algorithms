#include<bits/stdc++.h>

using namespace std;

string duplicate(string str)
{
    if(str.length() == 0)
    {
        return "";
    }
    char ch=str[0];
    string ans= duplicate(str.substr(1));
    if(ch == ans[0])
    {
        return ans;
    }
    else
    {
        return (ch + ans);
    }
}
int main()
{
    string senc;
    cout<<"Enter a word: ";
    getline(cin, senc);
    cout<<duplicate(senc)<<endl;
}