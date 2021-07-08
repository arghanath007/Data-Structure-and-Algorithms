#include<bits/stdc++.h>

using namespace std;

string replaceDigits(string s) 
{
    for(int i=1;i< s.length();i+=2)
    {
        s[i]+= s[i-1] - '0'; //Getting the next character.
    }
    return s;
}

int main()
{
    string wordNum;
    cout<<"Enter a word with digits in it: ";
    getline(cin, wordNum);
    cout<<"The word is: "<<replaceDigits(wordNum);
}