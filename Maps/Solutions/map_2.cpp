#include<bits/stdc++.h>

using namespace std;


int main()
{
    unordered_map<string,int> m;
    int len;
    string s;
    cout << "Enter the length: ";
    cin >> len;
    cout << "Enter the string: ";
    for (int i = 0; i < len;i++)
    {
        cin >> s;
        m[s]++; // m[s] = m[s] + 1;
    }
    int queries;
    cout << "Enter the number of queries: ";
    cin>>queries;
    while(queries--)
    {
        cout<<"Enter a query: ";
        string q;
        cin >> q;
        cout<<m[q]<<endl; // Getting the frequency of the 'qth' string in the unordered map.
    }
}