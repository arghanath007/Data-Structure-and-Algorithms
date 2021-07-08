#include<bits/stdc++.h>

using namespace std;

bool canConstruct(string ransomNote, string magazine)
{
    vector<int> alpha(26,0);
    for(int i=0;i< magazine.length();i++) // Counting the alphabets in 'magazine' and incrementing them in the 'alpha' vector.
    {
        ++alpha[magazine[i] - 'a'];
    }
    for(int j=0;j< ransomNote.length();j++) // Decrementing the letters from the 'magazine' that are present in the 'ransomNote' so if the count goes below '0' then magazine doesn't have enough characters, so we return 'false'.Otherwise, if we iterate over the whole of 'ransomNote' and the count doesn't go below '0' then we return true.
    {
        if(--alpha[ransomNote[j] - 'a'] < 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string ransomNote, magazine;
    cout<<"Enter the ransomNote: ";
    cin>>ransomNote;
    cout<<"Enter the ransomNote: ";
    cin>>ransomNote;
    if(canConstruct(ransomNote, magazine))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}