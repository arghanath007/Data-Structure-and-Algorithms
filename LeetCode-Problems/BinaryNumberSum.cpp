#include<bits/stdc++.h>

using namespace std;

 string addBinary(string a, string b) 
{
    string result="";
    int i= a.length()-1,j=b.length()-1,carry=0;
    while(i>=0 || j>=0 || carry)
    {
        if(i>=0 && a[i--] == '1')
        {
            ++carry;
        }
        if(j>=0 && b[j--] == '1')
        {
            ++carry;
        }
        result.insert(0,1,carry%2==1?'1': '0');
        carry/=2;
    }
    return result;
}

int main()
{
    string binaryOne, binaryTwo;
    cout<<"Enter two binary numbers: ";
    getline(cin, binaryOne);
    getline(cin, binaryTwo);
    cout<<"The sum is: "<<addBinary(binaryOne,binaryTwo);
}

// Cause we need to "cast" int to a char, say we want a character 1, we should consider it's ASCII value, it will be char(1 + 48), and '0' = 48

// '0' -> To convert them into integers from characters.


//result.insert(0,1,carry%2==1?'1': '0'); -> Explain below.
// 0 : is the index number where insertion is to be made
// 1 : is the number of repetition of character c
// 1 OR 0 : is the character to be inserted.