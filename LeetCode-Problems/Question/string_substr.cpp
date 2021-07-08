#include<bits/stdc++.h>

using namespace std;

int main()
{
    string number;
    cout<<"Enter a number: ";
    getline(cin, number);
    // cout<<number<<endl<<number.substr(0,number.size()-5);
    // cout<<number<<endl<<number.substr(0,number.size());
    // cout<<number<<endl<<number.substr(0,number.size()-1);
    // cout<<number<<endl<<number.substr(1,number.size());
    cout<<number.substr(number.size(),number.size());
}

//so .substr(position, length); -> It starts from the 0th index as usual in strings. The 'position' is the index from where the sub string will start(starting index) and the length is the length of the sub string but the length is not inclusive so it will be upto (length-1).
//number.substr(1,number.size()); ->  The sub string will start from 1st index and end at number.size()-1 as the length is not inclusive.

// cout<<number.substr(number.size(),number.size()); -> This return an empty string.