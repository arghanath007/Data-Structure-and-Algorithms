#include<bits/stdc++.h>

using namespace std;

bool isSumEqual(string firstWord, string secondWord, string targetWord)
{
    int first, second, target;
    first=second=target=0;
    for(int i=0;i< firstWord.size();i++)
    {
        first=first*10 + (firstWord[i] - 'a'); // Multiplying with 10 because we want to add the new number at the end of the already created sum of the string of numbers.
    }       
    for(int j=0;j< secondWord.size();j++)
    {
        second=second*10 + (secondWord[j] - 'a'); 
    }       
    for(int i=0;i< targetWord.size();i++)
    {
        target=target*10 + (targetWord[i] - 'a'); 
    }       
    return ((first + second) == target);
}


int main()
{
    string wordOne, wordTwo, targetWord;
    cout<<"Enter two words: ";
    getline(cin,wordOne);
    getline(cin,wordTwo);
    cout<<"Enter the target word: ";
    getline(cin, targetWord);
    bool result= isSumEqual(wordOne, wordTwo, targetWord);
    if(result)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}