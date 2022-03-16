#include<bits/stdc++.h>

using namespace std;


void ReplaceCharacter(char str[], int n, char ch1,char ch2)
{
    int flag = 0;
    if(str[0] == '\0')
    {
        flag = 1;
        // cout<<"NULL";
    }
    if(ch1== ch2)
    {
        flag = 0;
        // cout << "The original string is: \n";
        // for (int i = 0; str[i] != '\0';i++)
        // {
        //     cout << str[i];
        // }
    }
    int char1 =0, char2 = 0;
    for (int i = 0; str[i] != '\0';i++)
    {
        if(str[i]== ch1)
        {
            char1++;
            str[i]=ch2;
        }
        else if(str[i]== ch2)
        {
            char2++;
            str[i]=ch1;
        }
        else
        {
            continue;
        }
    }
    if(char1 >=1 && char2 >=1) // Both characters are present
    {
        flag = 2;
        // cout << "The modified string is: \n";
        // for (int i = 0; str[i] != '\0';i++)
        // {
        //     cout << str[i];
        // }
    }
    else // Both characters are not present
    {
        flag=0;
        // cout << "The original string is: \n";
        // for (int i = 0; str[i] != '\0';i++)
        // {
        //     cout << str[i];
        // }
    }
    if(flag==0)
    {
        cout << "The original string is: \n";
        for (int i = 0; str[i] != '\0';i++)
        {
            cout << str[i];
        }
    }
    else if(flag==1)
    {
        cout << "NULL";
    }
    else
    {
        cout << "The modified  string is: \n";
        for (int i = 0; str[i] != '\0';i++)
        {
            cout << str[i];
        }
    }
    
}


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
    char ch1, ch2;
    cout << "Enter two characters: ";
    cin >> ch1 >> ch2;
    ReplaceCharacter(str, len, ch1, ch2);
}