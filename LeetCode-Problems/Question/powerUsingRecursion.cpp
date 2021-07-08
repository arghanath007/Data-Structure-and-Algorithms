#include<bits/stdc++.h>

using namespace std;

int power(int numberOne, int numberTwo)
{
    if(numberTwo !=0)
    {
        return (numberOne * power(numberOne, numberTwo-1));
    }
    else
    {
        return 1;
    }
}

int main()
{
    int numberOne, numberTwo;
    cout<<"Enter two numbers: ";
    cin>>numberOne>>numberTwo;
    cout<<power(numberOne, numberTwo);
    // int numberOne, numberTwo;
    // cout<<"Enter two numbers: ";
    // cin>>numberOne>>numberTwo;
    // int power= exp(numberTwo * log(numberOne));
    // cout<<power<<endl;
}