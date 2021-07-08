#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    bool check=true;
    cout<<"Enter the size of the characters: ";
    cin>>n;
    char array[n+1];
    cout<<"Enter the word to check for palindrome: ";
    cin>>array;
    for(int i=0; array[i] !='\0';i++)
    {
        if(array[i] != array[n-1-i])
        {
            check=false;
            break;
        }
    }
    if(check)
    {
        cout<<"The word is Palindrome!!!!";
    }
    else
    {
        cout<<"The word is not Palindrome!!!";
    }
}