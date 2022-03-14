#include<bits/stdc++.h>

using namespace std;


int BalanceFruits(int a,int m, int rs)
{
    int buy,left=0,sell;
    if(a > m)
    {
        buy=a-m;
        return (rs - buy);
    }
    else if(a < m)
    {
        sell=m-a;
        return (rs+sell);
    }
    return rs;
}

int main()
{
    int a,m,rs,change=0;
    cout<<"Enter the number of baskets, mangoes and money"<<endl;
    cin >> a >> m >> rs;
    change=BalanceFruits(a,m,rs);
    cout<<"\nThe balance is: "<<change<<endl;
    return 0;
}