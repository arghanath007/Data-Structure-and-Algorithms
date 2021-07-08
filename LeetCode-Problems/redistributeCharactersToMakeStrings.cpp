#include<bits/stdc++.h>

using namespace std;

bool makeEqual(vector<string>& strs) 
{
    // vector<string> mp(26,0); //Initializing the vector with size equals to '26' and the initial value of '0' in all the 26 positions/places of the vector.

    int mp[26]={0};
    for(auto& word: strs) // Taking one word from the sentence 
    {
        for(auto ch: word) // Taking a character from the word.
        {
            ++mp[ch - 'a'];
        }
    }
    int size= strs.size();
    for(int i: mp)
    {
        if(i % size !=0)  // check if we can distribute the freq in all the words equally or not, if no then return false.
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<string> words;
    string word;
    int count;
    cout<<"Enter the count of words: ";
    cin>>count;
    cout<<"Enter a sentence: ";
    for(int i=0;i< count;i++)
    {
        getline(cin, word);
        words.push_back(word);
    }
    bool result=makeEqual(words);
    if(result)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}