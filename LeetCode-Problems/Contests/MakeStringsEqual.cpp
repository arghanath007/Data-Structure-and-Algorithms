#include<bits/stdc++.h>

using namespace std;

bool equalStrings(vector<string>& strs)
{
    if (strs.size() == 0) 
    {
        return false;
    }
    if (strs[0].size() == 0) 
    {
        return false;
    }
    if (strs.size() == 1) 
    {
        return true;
    }
    int j=0;
    bool flag=false;
    while (true) 
    {
        for (int i=0;i<strs.size()-1;i++) 
        {
            if (strs[i][j] != strs[i+1][j]) 
            {
                char ch= strs[i][j];
                if(ch == strs[i][j+1])
                {
                    strs[i].erase(1,1);
                    strs[i+1].insert(ch,0);
                    flag=true;
                    break;
                }
            }         
        }
        if (flag) 
        {
            break;
        }
        if(j >= strs[0].size())
        {
            break;
        } 
        j++;
    }
    return flag;
}

int main()
{
    int size;
    string str;
    cout<<"Enter the size: ";
    cin>>size;
    vector<string> array(size);
    cout<<"Enter the words: ";
    for(int i=1;i<=size;i++)
    {
        getline(cin, str);
        array.push_back(str);
    }
    if(equalStrings(array))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}