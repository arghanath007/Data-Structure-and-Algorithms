#include<bits/stdc++.h>

using namespace std;

string keypadArr[]={"","", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void subString(string str, string ans)
{
     if(str.length() == 0)
     {
        cout<<ans<<endl;
        return;
     }

     char ch=str[0];
     string code=keypadArr[ch - '0']; // A way to convert a character into an integer because we need an integer.
     string rest= str.substr(1);
     for(int i=0;i< code.length();i++)
     {
         subString(rest, ans + code[i]);
     }
}
int main()
{
    string senc;
    cout<<"Enter a word: ";
    getline(cin, senc);
    subString(senc,"");
}