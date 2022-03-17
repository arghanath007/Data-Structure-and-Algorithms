#include<bits/stdc++.h>

using namespace std;


int Calculate(int m,int n)
{
    int sum = 0;
    for (int i = m; i <= n;i++)
    {
        if(i%3==0 && i%5==0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int m, n;
    cout<<"Enter two numbers: ";
    cin>>m>>n;
    cout<<"The result is: "<<Calculate(m,n);
    return 0;
}