#include<bits/stdc++.h>

using namespace std;

int maximumPopulation(vector<vector<int>>& logs)
{
    vector<int> value(2051,0);
    for(auto log: logs)
    {
        value[log[0]]+=1;
        value[log[1]]-=1;
    }
    for(int i=1;i< 2051;i++)
    {
        value[i]+=value[i-1];
    }
    int val=INT_MIN; // -2147483648
    int ans=0;
    for(int i=0;i<2051;i++)
    {
        if(val < value[i])
        {
            val=value[i];
            ans=i;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> logs;
    int size,number;
    cout<<"Enter the size: ";
    cin>>size;
    cout<<"Enter the dates(birth, death): ";
    for(int i=0;i< size;i++)
    {
        vector<int> temp;
        for(int j=0;j<2;j++) //Since Birth and death dates only.
        {
            cin>>number;
            temp.push_back(number);
        }
        logs.push_back(temp);
    }
    cout<<maximumPopulation(logs);
}