#include<bits/stdc++.h>

using namespace std;

void reverse(string str)
{
    if(str.length() == 0)
    {
        return;
    }
    string rest= str.substr(1); // The string after that position(1 here) will be stored in the rest string. 
    cout<<rest<<" ";
    reverse(rest);
    cout<<str[0];
}

int main()
{
    string str;
    cout<<"Enter a word: ";
    getline(cin, str);
    reverse(str);
    return 0;
}