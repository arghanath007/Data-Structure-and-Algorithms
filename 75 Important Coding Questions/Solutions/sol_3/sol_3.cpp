#include<bits/stdc++.h>

using namespace std;

bool checkdup(vector<int> nums)
{
    unordered_set<int> s;
    for (int i = 0; i < nums.size();i++)
    {
        s.insert(nums[i]);
    }
    if(s.size() != nums.size())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int len;
    cout << "Enter the lenght: ";
    cin >> len;
    vector<int> v;
    int x;
    cout<<"Enter the numbers: ";
    for (int i = 0; i < len;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    // bool result= checkdup(v);
    if(checkdup(v))
    {
        cout<<"Duplicate numbers found"<<endl;
    }
    else
    {
        cout<<"No duplicate numbers found"<<endl;
    }
}