#include<bits/stdc++.h>

using namespace std;

int CheckPassword(char str[], int len, int min)
{
    if(len > min)
    {
        if(isdigit(str[0]))
        {
            return -1;
        }
        int i=0, cap=0, dig=0;
        for (int i = 0; i < len;i++)
        {
            if(isupper(str[i]))
            {
                cap++;
            }
            if(isdigit(str[i]))
            {
                dig++;
            }
            if(isspace(str[i]) || str[i] == '+')
            {
                return -1; 
            }
        }
        if(cap > 0 && dig > 0)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    return -1;
}

int main()
{
    int min;
    string s;
    cout<<"Enter the string: ";
    getline(cin, s);
    int len = s.size();
    char *c = &s[0];
    cout<<"Enter the min length of the string: ";
    cin >> min;

    int result=CheckPassword(c,len,min);
    if(result == 0)
    {
        cout<<"Password is valid"<<endl;
    }
    else
    {
        cout<<"Password is invalid"<<endl;
    }
    return 0;
}