#include<bits/stdc++.h>

using namespace std;

int maxSubArray(vector<int>& nums)
{
    int maxSum = nums[0];
    int curSum = 0;

    for (int i = 0; i < nums.size();i++)
    {
        if(curSum <0)
        {
            curSum = 0;
        }
        curSum+=nums[i];
        maxSum = max(maxSum,curSum);
    }
    return maxSum;
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
    cout<<"The maximum subarray sum is: "<<maxSubArray(nums);
}