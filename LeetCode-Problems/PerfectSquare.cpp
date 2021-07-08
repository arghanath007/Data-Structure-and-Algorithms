#include<bits/stdc++.h>

using namespace std;
bool isPerfectSquare(int num) 
{
    // int i=1;
    // while(num>0)
    // {
    //     num-=i; //Substracting odd numbers.
    //     i+=2;
    //     if(!num) // If the number is '0' then it is a perfect square.
    //     {
    //         return true;
    //     }
    // }
    // return false;

    long int i;
    for(int i=1;num>0;i+=2)
    {
        num-=i; //Substracting odd numbers.
        if(!num) // If the number is '0' then it is a perfect square
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    bool result= isPerfectSquare(number);
    if(result)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}

//It makes use of the fact that all square numbers are sum of odd numbers starting from 1.