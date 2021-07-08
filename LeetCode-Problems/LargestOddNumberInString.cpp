#include<bits/stdc++.h>

using namespace std;

string largestOddNumber(string num) 
{
    for(int i=num.size()-1;i>=0;i--)
    {
        if((num[i] -'0')%2) // if it is a odd number then the remainder of the number will be '1' which is true and the code within the if condition will run. If it is a even number then the remainder of the number will be '0' which is false and the loop will go to the next iteration.
        {
            return num.substr(0,i+1); // To compensate that the length or the 2nd parameter of substr() is not inclusive so we have added '+1' to the ith iteration of the loop.
        }
    }
    // return string(); // string() returns an empty string.
    return "";
}

int main()
{
    string number;
    cout<<"Enter a number: ";
    getline(cin, number);
    string str=largestOddNumber(number);
    if(str == "")
    {
        cout<<"Empty string";
    }
    else
    {
        cout<<str;
    }
}