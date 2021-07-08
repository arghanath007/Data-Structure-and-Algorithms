#include<bits/stdc++.h>

using namespace std;

int power(int n, int p)
{
    if(p ==0)
    {
        return 1;
    }
    else
    {
        return n * power(n,p-1);
    }
}

int main()
{
    int n,p;
    cout<<"Enter the number and power: ";
    cin>>n>>p;
    cout<<power(n,p)<<endl;
}