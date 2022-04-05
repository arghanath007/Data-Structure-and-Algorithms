#include<bits/stdc++.h>

using namespace std;


string frequencyCount(string str)
{
    int len = str.length();
    int freq[26] = {0};
    int num;
    char ch;
    string result = "";
    for (int i = 0; i < len; i++)
    {
        num = str[i] - 'a';
        freq[num]++;
    }

    for (int i = 0; i < 26;i++)
    {
        if(freq[i]!=0)
        {
            ch = i + 97;
            result += ch;
            result += to_string(freq[i]);
        }
    }
    return result;
}

int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    string result=frequencyCount(str);
    cout << result;
}