#include<bits/stdc++.h>

using namespace std;

bool Check_Balanced_Braces(string s)
{
    stack<char> st;
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i] == '{')
        {
            st.push('{');
        }
        else 
        {
            if(st.empty())
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
    }
    return st.empty();
}

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin,s);
    bool result=Check_Balanced_Braces(s);
    if(result)
    {
        cout<<"The string is balanced";
    }
    else
    {
        cout<<"The string is not balanced";
    }
}