#include<bits/stdc++.h>

using namespace std;

int longestPalindrome(string s) 
{
    vector<int> letters(52,0);
    bool isOdd=false;
    int longestPalindrome=0;
    for(int i=0;i< s.length();i++)
    {
        if(s[i] <= 'Z')
        {
            letters[s[i] - 'A']++; // For the UpperCase letter count.
        }
        else
        {
            letters[s[i] - 'a' + 26]++; // For the LowerCase letter count. We are adding '+26' here as 0-25 positions of the 'letters' vector will be the count of the Uppercase letters and from 26-52 will be the count of the lowercase letters.
        }
    }
    for(int j=0;j< 52;j++)
    {
        longestPalindrome+=letters[j]/2;
        if(letters[j] % 2 == 1)
        {
            isOdd=true;
        }
    }
    return isOdd == true ? 2 * longestPalindrome + 1 : 2* longestPalindrome;
}

int main()
{
    string word;
    cout<<"Enter a word: ";
    cin>>word;
    cout<<longestPalindrome(word);
}