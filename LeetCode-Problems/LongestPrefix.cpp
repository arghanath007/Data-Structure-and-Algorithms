#include<bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<string>& strs)
{
    string res="";
    if (strs.size() == 0) // If the string vector is empty
    {
        return res;
    }
    if (strs[0].size() == 0) // If the first string word in the vector is empty.
    {
        return res;
    }
    if (strs.size() == 1) //If only one word is present in the vector. 
    {
        return strs[0];
    }
    int j=0;
    bool flag=false;
    while (true) 
    {
        for (int i=0;i<strs.size()-1;i++) 
        {
            if (strs[i][j] != strs[i+1][j]) // If they are same then go to the next one, if they are different then we set flag=true.
            {
                flag=true;
                break;
            }         
        }
        if (flag) 
        {
            break;
        }
        if(j >= strs[0].size())
        {
            break;  // this will check if j is getting outside
        } 
        j++;
    }
    for (int i=0;i<j;i++) 
    {
        res +=strs[0][i];
    }
    return res;
}

int main()
{
    vector<string> array;
    int size;
    string str;
    cout<<"Enter the size: ";
    cin>>size;
    cout<<"Enter the words: ";
    for(int i=0;i< size;i++)
    {
        getline(cin, str);
        array.push_back(str);
    }
    cout<<"The prefix is: "<<longestCommonPrefix(array);
}