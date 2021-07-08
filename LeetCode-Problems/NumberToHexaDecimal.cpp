#include<bits/stdc++.h>

using namespace std;

string toHex(int num)
{
    unsigned int number=num; // Because we need to implicitely cast the negative numbers.
    string result;
    char hex[17]="0123456789abcdef"; //Hexa-deciaml values.
    do
    {
        result+= hex[number % 16];
        number/=16;
    } while (number);
    return {result.rbegin(), result.rend()}; // We are reversing the result because we display Hexa-decimal number from bottom to top or last to first so after reversing the last values comes to the first and first value goes to the last.
}

int main()
{
    int number;
    cout<<"Enter the number to be converted: ";
    cin>>number;
    cout<<toHex(number);
}