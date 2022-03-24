#include<bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) 
{
    int l,r; //l ->low(Buy) r->high(Sell)
    l = 0, r = 1;
    int maxP = 0,profit;
    int len=prices.size();
    while(r< len)
    {
        if(prices[l]< prices[r])
        {
            profit= prices[r] - prices[l];
            maxP=max(maxP,profit);
        }
        else
        {
            l=r;
        }
        r++;
    }
    return maxP;
}

int main()
{
    int len;
    cout << "Enter the len: ";
    cin >> len;
    vector<int> prices(len);
    cout << "Enter the prices: ";
    for(int i = 0; i < len; i++)
    {
        cin >> prices[i];
    }
    cout << "The max profit is: " << maxProfit(prices) << endl;
}