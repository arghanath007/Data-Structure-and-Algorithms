#include<bits/stdc++.h>

using namespace std;

bool isHappy(int n) 
{
    unordered_set<int> numbers;
    while(n !=1)
    {
        if(numbers.find(n) == numbers.end())
        {
            numbers.insert(n);
        }
        else
        {
            return false; //If one of the numbers repeats itself then return false.
        }
        int sum=0;
        while(n!=0) // Taking one digit at a time from a number and calculating it's sqrt.
        {
            int rem= n%10;
            sum+= pow(rem,2);
            n/=10;
        }
        n=sum;
    }
    return true;
}

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    bool result=isHappy(number);
    if(result)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}