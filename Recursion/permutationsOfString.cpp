#include<bits/stdc++.h>

using namespace std;


void permutation(string str, string ans)
{
    if(str.length() == 0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<str.length();i++) // To fix all of the characters in the word once.
    {
        char ch= str[i]; //Fixed Character.
        string rest= str.substr(0,i) + str.substr(i+1); // str.substr(0,i); -> So the '0' means the starting index from where it should take the string and 'i' is denoting the length of the string. So, if i=1, then only one character will be in the str.substr(0,i). This 2nd parameter('i') which determines the length is optional as we have written in str.substr(i+1), so here it will start from 'i+1' index and go till the end of the string. 'str.substr(0,i)' -> Giving us the previous character from the fixed character at ith position. 'str.substr(i+1)' ->  Giving us the next/following character from the fixed character at ith position.
        permutation(rest, ans + ch);
    }
}
int main()
{
    string senc;
    cout<<"Enter a word: ";
    getline(cin, senc);
    permutation(senc,""); 
}