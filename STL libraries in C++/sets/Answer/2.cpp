#include<bits/stdc++.h>

using namespace std;


void print(unordered_set<string> &s)
{
    for(auto i:s)
    {
        cout<<i<<endl;
    }
}

int main()
{
    int len,q;
    cout << "Enter the length: ";
    cin >> len;
    unordered_set<string> s;
    unordered_set<string> queries;
    string str;
    cout << "Enter the strings: ";
    for (int i = 0; i < len;i++)
    {
        cin >> str;
        s.insert(str);
    }
    cout << "Enter the number of queries: ";
    cin >> q;
    cout << "Enter the queries: ";
    for (int i = 0; i < q;i++)
    {
        cin >> str;
        queries.insert(str);
    }

    for(auto i:queries)
    {
        if(s.find(i) != s.end())
        {
            cout <<"String: "<<i<<" Yes" << endl;
        }
        else
        {
            cout <<"String: "<<i<<" No" << endl;
        }
    }

    cout << "The strings are: " << endl;
    print(s);
}