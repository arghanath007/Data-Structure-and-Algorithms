#include<bits/stdc++.h>

using namespace std;


void print(set<string> &s)
{
    for(auto i:s)
    {
        cout<<i<<endl;
    }
}

int main()
{
    int len;
    cout << "Enter the length: ";
    cin >> len;
    set<string> s;
    string str;
    cout << "Enter the strings: ";
    for (int i = 0; i < len;i++)
    {
        cin >> str;
        s.insert(str);
    }

    cout << "The strings are: " << endl;
    print(s);
}