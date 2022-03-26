#include<bits/stdc++.h>

using namespace std;

int maxProduct(vector<int>& nums)
{
    int len=nums.size();
    int res=nums[0];
    int l,r;
    l=r=0; // l-> left side, r-> right side.
    for (int i = 0; i < len;i++)
    {
        if(l) // Positive, greater than 0.
        {
            l *= nums[i];
        }
        else
        {
            l=nums[i];
        }
        if(r)
        {
            r *= nums[len-1-i];
        }
        else
        {
            r=nums[len-1-i];
        }
        res=max(res,max(l,r));
    }
    return res;
}

int main()
{
    int len;
    cout<<"Enter the length of the array: ";
    cin>>len;
    vector<int> nums(len);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<len;i++)
    {
        cin>>nums[i];
    }
    cout<<"The maximum product is: "<<maxProduct(nums);
}