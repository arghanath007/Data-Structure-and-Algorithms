#include<bits/stdc++.h>

using namespace std;

int firstUniqChar(string s) 
{
    // unordered_map<char, int> countMap;
    // int ans=INT_MAX;
    // for(int i=0;i< s.length();i++)
    // {
    //     if(countMap.find(s[i]) == countMap.end())
    //     {
    //         countMap[s[i]]=i;
    //     }
    //     else
    //     {
    //         countMap[s[i]]= INT_MAX;
    //     }
    // }
    // for(auto i: countMap)
    // {
    //     ans=min(i.second, ans);
    // }
    // return (ans == INT_MAX)? -1: ans;

    vector<int> count(26,0); //We can make do with 26 for lowercase letters but 256 is for covering all the letters in ASCII format.
    for(auto i : s)
    {
        count[i - 'a']++;
    }
    for(int i=0; i< count.size();i++)
    {
        cout<<count[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i< s.length();i++)
    {
        if(count[s[i] -'a'] == 1)
        {
            return i;
        }
    }
    return -1;
    

    // vector<int> count(256,0);
    // for(auto i : s)
    // {
    //     count.at(i)++;
    // }
    // for(int i=0;i< s.length();i++)
    // {
    //     if(count[s.at(i)] == 1) //checks if 'i' is within the bounds of the elements within the 'count' vector.
    //     {
    //         return s.at(i);
    //     }
    // }
    // return -1;

}

int main()
{
    string word;
    cout<<"Enter a word: ";
    getline(cin, word);
    cout<<firstUniqChar(word);
    return 0;
}


//https://www.cplusplus.com/reference/vector/vector/at/ -> Vector::at (count[s.at(i)])
//The function automatically checks whether n is within the bounds of valid elements in the vector, throwing an out_of_range exception if it is not (i.e., if n is greater than, or equal to, its size). This is in contrast with member operator[], that does not check against bounds.