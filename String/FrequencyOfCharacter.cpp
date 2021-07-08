#include<bits/stdc++.h>

using namespace std;

int main()
{
    string sentence;
    cout<<"Enter the sentence: ";
    cin>>sentence;
    int arrayCount[26];
    for(int i=0;i< 26;i++)
    {
        arrayCount[i]=0;
    }
    for(int i=0;i< sentence.length();i++)
    {
        arrayCount[sentence[i] - 'a']++;
    }
    char ans='a';
    int maxFrequency=arrayCount[0];
    for(int i=0;i< 26;i++)
    {
        if(arrayCount[i] > maxFrequency)
        {
            maxFrequency= arrayCount[i];
            ans= i + 'a';
        }
    }
    cout<<maxFrequency<<" "<<ans<<endl;
}