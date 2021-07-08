#include<bits/stdc++.h>

using namespace std;

int climbStairs(int n)
{
    if(n <=2)
    {
        return n;
    }
    vector<int> stairs(n+1);
    // stairs[0]=0;
    stairs[1]=1;
    stairs[2]=2;
    for(int i=3;i<= n;i++)
    {
        stairs[i]= stairs[i-1] + stairs[i-2];
    }
    return stairs[n];
}

int main()
{
    int stepsCount;
    cout<<"Enter the stairs count: ";
    cin>>stepsCount;
    cout<<climbStairs(stepsCount);
}

//Pretty much fibonacci series with Dynamic Programming.
