#include<bits/stdc++.h>

using namespace std;

int remainder(string number)
{
    int num = 0;
    int len = number.length();
    for (int i = 0; i < len;i++)
    {
        num = num * 10 + (number[i]- '0'); // Converting the string number into integers for easier calculations.
        // cout << num << endl;
    }
    // int q = num / 11;
    // int rem = q * 11;
    // int remainder = num - rem;
    int remainder = num % 11;
    return remainder;
}

int main()
{
    string number;
    cout << "Enter the string: ";
    getline(cin, number);

    int result=remainder(number);
    cout << "The remainder is: " << result;
}
