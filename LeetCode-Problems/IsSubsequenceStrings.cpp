#include<bits/stdc++.h>

using namespace std;

bool isSubsequence(string s, string t) 
{
    int sSize = s.length();
    int tSize = t.length();
    int i=0,j=0;
    while(i < sSize && j< tSize)
    {
        if(s[i] == t[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    return ((i == sSize)? 1:0);
}

int main()
{
    string original, modified;
    cout<<"Enter a word: ";
    getline(cin, original);
    cout<<"Enter a modified verison of the above word: ";
    getline(cin,modified);
    bool result= isSubsequence(original, modified);
    if(result)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}