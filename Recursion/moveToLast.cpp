#include<bits/stdc++.h>

using namespace std;

string moveLast(string str)
{
    if(str.length() == 0)
    {
        return "";
    }

    char ch=str[0];
    string ans=moveLast(str.substr(1));
    if(ch == 'x' || ch== 'X')
    {
        return (ans + ch);
    }
    else
    {
        return (ch + ans);
    }

}
int main()
{
    string senc;
    cout<<"Enter a word: ";
    getline(cin, senc);
    cout<<moveLast(senc)<<endl;
}