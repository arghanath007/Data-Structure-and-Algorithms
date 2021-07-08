#include<bits/stdc++.h>

using namespace std;

int secondHighest(string s) 
{
    vector<int> result(2, -1);
    for(auto& ch: s)
    {
        if(ch >= '0' && ch<='9')
        {
            ch-='0'; //Turning the character into an integer.
            if(ch > result[0])
            {
                result[1]= result[0]; // '0' holds the biggest, '1' holds the 2nd biggest.
                result[0]=ch;
            }
            else if(ch!= result[0] && ch > result[1])
            {
                result[1]=ch;
            }
        }
    }
    return result[1];
}

int main()
{
    string word;
    cout<<"Enter a string: ";
    getline(cin, word);
    cout<<secondHighest(word);
}