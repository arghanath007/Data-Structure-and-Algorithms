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
    int code=ch;
    string rest=str.substr(1);

    subString(rest, ans);
    subString(rest, ans + ch);
    subString(rest, ans + to_string(code));
}
int main()
{
    string senc;
    cout<<"Enter a word: ";
    getline(cin, senc);
    subString(senc,"");
    return 0;
}