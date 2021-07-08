#include<bits/stdc++.h>

using namespace std;

int maxAscendingSum(vector<int>& nums)
{
    int sum,res=0;
    sum= nums[0]; // If the vector has only one element.
    for(int i=1;i< nums.size();i++)
    {
        if(nums[i] <= nums[i-1])
        {
            res=max(res, sum);
            sum=0;
        }
        sum+=nums[i];
    }
    return (max(res,sum));
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
    cout<<maxAscendingSum(numbers);
}