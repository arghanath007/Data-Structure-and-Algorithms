#include<bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    if(n ==0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<factorial(n)<<endl;
}