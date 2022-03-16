#include<bits/stdc++.h>

using namespace std;

string MoveHyphen(string str,int n)
{
    if(str.empty())
    {
        return NULL;
    }
    int pointer = 0, count = 0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        if(str[i]=='-')
        {
            count++;
            str.erase(i,1);
        }
    }
    while(count--)
    {
        str= '-' + str;
    }
    return str;
}

// void test(string str)
// {
//     for (int i = 0; i < str[i]!='\0';i++)
//     {
//         if(isspace(str[i]))
//         {
//             str[i]=str[i+1];
//             i++;
//         }
//     }
//     for (int i = 0; i < str[i]!='\0';i++)
//     {
//         cout<<str[i];
//     }
// }

int main()
{
    int len;
    cout<<"Enter the length of the string: ";
    cin>>len;
    char str[len];
    cout<<"Enter the string: ";
    for (int i = 0; i < len;i++)
    {
        cin>>str[i];
    }
    string result=MoveHyphen(str, len);
    for (int i = 0; i < result[i] != '\0';i++)
    {
        cout << result[i];
    }
        // test(str);
        return 0;
}