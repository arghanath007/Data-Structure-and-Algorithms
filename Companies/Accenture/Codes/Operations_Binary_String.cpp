#include<bits/stdc++.h>

using namespace std;


int OperationBinaryString(char* str)
{
    if(str ==NULL)
    {
        return -1;
    }
    int i = 1;
    int a = *str - '0';
    str++;
    while(*str!='\0')
    {
        char p=*str;
        str++;
        if(p=='A')
        {
            a&=(*str - '0');
        }
        else if(p=='B')
        {
            a|=(*str - '0');
        }
        else
        {
            a^=(*str - '0');
        }
        str++;
    }
    return a;
}
 
int main()
{
    int len;
    cout << "Enter the length: ";
    cin >> len;
    char str[len];
    cout<<"Enter the characters of the string: ";
    for (int i = 0;i< len;i++)
    {
        cin>>str[i];
    }
    int result = OperationBinaryString(str);
    cout<<"The result is: "<<result;
}


// Resource -> https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/