#include<bits/stdc++.h>

using namespace std;

bool checkIfPangram(string sentence) 
{
    set<int> word;
    for(auto &ch: sentence)
    {
        word.insert(ch);
    }
    set<int>:: iterator itr;
    for(itr=word.begin();itr!=word.end();itr++)
    {
        cout<<" "<<*itr;
    }
    cout<<endl;
    return (word.size() == 26);
}

int main()
{
    string sentence;
    cout<<"Enter the sentence: ";
    getline(cin, sentence);
    bool result=checkIfPangram(sentence);
    if(result)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}

//Set -> It only contains unique elements/items in it. It also sorts the elements within itself and returns the sorted elements and the unique elements only. That why it return 6 elements in sorted order[99,100,101,108,111,116] and not the length of the string(leetcode) which is 8. So it has unique elements.
//https://www.cplusplus.com/reference/set/set/