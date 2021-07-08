#include<bits/stdc++.h>

using namespace std;

string truncateSentence(string s, int k) 
{
    int spaces=0;
    string truncated;
    for(int i=0;i< s.length();i++)
    {
        if(s[i] == ' ')
        {
            k--;
        }
        if(!k)
        {
            break;
        }
        truncated.push_back(s[i]);
    }
    return truncated;

    //Less lines
    // for(int i=0;i< s.length();i++)
    // {
    //     if(s[i] == ' ' && --k==0)
    //     {
    //         return s.substr(0,i);
    //     }
    // }
    // return s;
}

int main()
{
    string sentence;
    cout<<"Enter a sentence: ";
    getline(cin, sentence);
    int limit;
    fflush(stdin);
    cout<<"Enter the truncation limit: ";
    cin>>limit;
    cout<<"The truncated sentence is: "<<truncateSentence(sentence, limit);
}