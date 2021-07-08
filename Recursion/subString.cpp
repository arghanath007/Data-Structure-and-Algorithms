#include<bits/stdc++.h>

using namespace std;

void subString(string str, string ans)
{
    if(str.length() == 0)
    {
        cout<<ans<<endl;
        return;
    } 
    char ch=str[0];
    string rest=str.substr(1);
    subString(rest, ans);
    subString(rest, ans +ch); 
}
int main()
{
    string senc;
    cout<<"Enter a word: ";
    getline(cin, senc);
    subString(senc,"");
    return 0;
}