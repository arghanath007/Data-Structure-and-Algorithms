#include<bits/stdc++.h>

using namespace std;

void LongestSubString(string s)
{
    int len = s.length();
    map<int, string> character(len,0);
    for(auto &i: character)
    {
        cout << i.first << " " << i.second << endl;
    }
}

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    LongestSubString(s);
}
