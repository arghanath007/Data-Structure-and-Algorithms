#include<bits/stdc++.h>

using namespace std;

int searchInsert(vector<int>& nums, int target) 
{
    int i;
    if(nums.size() < 2)
    {
        if(nums[0] == target)
        {
            return 0;
        }
    }
    for(i=0;i< nums.size();i++)
    {
        if(nums[i] == target)
        {
            return i;
        }
        else if(nums[i] > target)
        {
            return i;
        }
    }
    return i;
}


int main()
{
    int size, target,number;
    cout<<"Enter the size: ";
    cin>>size;
    cout<<"Enter the target: ";
    cin>>target;
    vector<int> nums;
    cout<<"Enter the elements: ";
    for(int i=0;i< size;i++)
    {
        cin>>number;
        nums.push_back(number);
    }
    cout<<searchInsert(nums, target);
}