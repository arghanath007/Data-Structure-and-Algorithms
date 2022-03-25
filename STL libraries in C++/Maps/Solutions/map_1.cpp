#include<bits/stdc++.h>

using namespace std;


int main()
{
    map<string,int> m;
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
    for(auto &pr: m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}