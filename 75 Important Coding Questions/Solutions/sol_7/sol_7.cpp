#include<bits/stdc++.h>

using namespace std;

int findMin(vector<int>& nums)
{
    int len = nums.size();
    int minimum=nums[0];
    for (int i = 0; i < len;i++)
    {
        minimum=min(minimum,nums[i]);
    }
    return minimum;
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
    cout<<"The minimum is: "<<findMin(nums);
}