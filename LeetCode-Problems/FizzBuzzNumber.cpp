#include<bits/stdc++.h>

using namespace std;

vector<string> fizzBuzz(int n) 
{
    vector<string> result;
    for(int i=1, fizz=0, buzz=0; i<= n;i++)
    {
        fizz++;
        buzz++;
        if(fizz == 3 && buzz == 5)
        {
            result.push_back("FizzBuzz");
            fizz=0;
            buzz=0;
        }
        else if(fizz == 3)
        {
            result.push_back("Fizz");
            fizz=0;
        }
        else if(buzz == 5)
        {
            result.push_back("Buzz");
            buzz=0;
        }
        else
        {
            result.push_back(to_string(i));
        }
    }
    return result;
}

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    vector<string> result;
    result=fizzBuzz(number);
    for(int i=0;i< result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
}