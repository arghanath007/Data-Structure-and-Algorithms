#include<bits/stdc++.h>

using namespace std;


int main()
{
    string word;
    cout<<"Enter a word: "<<endl;
    getline(cin,word);
    cout<<"The word is: "<<word<<endl;
    //UpperCase
    //Since, 'A' -'a'= -32.
    for(int i=0; i< word.length();i++)
    {
        if(word[i] >= 'a' && word[i]<= 'z')
        {
            word[i]-=32;
        }
    }
    cout<<"In UpperCase: "<<word<<endl;
    //LowerCase
    //Since, 'a' -'A'= 32.
    for(int i=0; i< word.length();i++)
    {
        if(word[i] >= 'A' && word[i] <= 'Z')
        {
            word[i]+=32;
        }
    }
    cout<<"In LowerCase: "<<word<<endl;

    //Using In-build functions.
    transform(word.begin(), word.end(), word.begin(), ::toupper);
    //The 1st and the 2nd parameters are used to input the whole string within the function. The 3rd parameter is used to define from where the convertion would start. The 4th parameter defines which operation we are doing on the string.
    cout<<"In UpperCase: "<<word<<endl;
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    cout<<"In LowerCase: "<<word<<endl; 
}