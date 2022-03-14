#include<bits/stdc++.h>

using namespace std;

int differenceOfSum(int n, int m)
{
    int divsum = 0, notdivsum = 0;
    for (int i = 1; i <= m;i++)
    {
        if(i%n==0)
        {
            divsum += i;
        }
        else
        {
            notdivsum += i;
        }
    }
    return abs(notdivsum - divsum);
}

int main()
{
    int n, m;
    cout << "Enter two numbers: ";
    cin>>n>>m;
    int sum=differenceOfSum(n, m);
    cout<<"The difference is: "<<sum;
}