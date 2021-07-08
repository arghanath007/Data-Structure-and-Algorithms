#include<bits/stdc++.h>

using namespace std;

int minOperations(vector<int>& nums) 
{
    // int result=0, last=nums[0]-1;
    // for(auto num: nums)
    // {
    //     result+= max(0, last-num+1);
    //     last= max(num, last+1);

    // }
    // return result;

    int output=0;
    for(int i=0;i< nums.size()-1;i++)
    {
        if(nums[i]< nums[i+1])
        {
            continue;
        }
        else
        {
            output+=(nums[i]-nums[i+1] +1); // We are adding +1 to get the next higher number than nums[i] in nums[i+1], so that it is strictly increasing. Output is storing the value/ amount needed to make the array strictly increasing.
            nums[i+1]=nums[i] +1;
        }
    }
    return output;
}

int main()
{
    int size,number;
    cout<<"Enter the size: ";
    cin>>size;
    vector<int> numbers;
    cout<<"Enter the numbers: ";
    for(int i=0;i< size;i++)
    {
        cin>>number;
        numbers.push_back(number);
    }
    cout<<minOperations(numbers);
}