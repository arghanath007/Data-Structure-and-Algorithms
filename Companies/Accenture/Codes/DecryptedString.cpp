#include<bits/stdc++.h>

using namespace std;


char decryptionString(string str,int pos)
{
    int len = str.length();
    // cout << "\n Length: " << len<<endl;
    int sum = 0;
    char result = '\0';
    for (int i = 1; i < len; i += 2)
    {
        sum += (str[i] - '0'); // Converting the string numbers to intgers for the addition to take place.
        if(sum>=pos)
        {
            result= str[i - 1];
            // cout << "\n Character: " << result<<endl;
            return result;
        }
        // cout << "\n Sum: " << sum<<endl;
    }
    // cout << "\n Character Result: " << result<<endl;
    return result;
}

int main()
{
    string str;
    int pos;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter the position: ";
    cin >> pos;

    char ch = decryptionString(str,pos);
    if(ch == '\0')
    {
        cout << "Error!!!";
    }
    else
        cout << "The character is: " << ch;
}