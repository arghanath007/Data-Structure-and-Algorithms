#include<bits/stdc++.h>

using namespace std;

char findTheDifference(string s, string t)
{
    // char result=0;
    // for(char c : s)
    // {
    //     result^=c; // same then '0' otherwise '1'.
    // }
    // for(char c : t)
    // {
    //     result^=c;
    // }
    // return result;

    int resultOne=0, resultTwo=0;
    for(char c : s)
    {
        resultOne+=c;
    }
    for(char c : t)
    {
        resultTwo+=c;
    }
    return (resultTwo-resultOne); // The extra character in string 't' is the difference so we return the difference of the sum of the two strings.
}

int main()
{
    string word, randomWord;
    cout<<"Enter a word: ";
    getline(cin, word);
    cout<<"Enter a random word from the above word and add one character to it: ";
    getline(cin, randomWord);
    cout<<findTheDifference(word, randomWord);
}