#include<bits/stdc++.h>

using namespace std;

int getMinDistance(vector<int>& nums, int target, int start) 
{
    int result= nums.size() +1; //Setting it to an impossible value.
    for(int i=0; i< nums.size();i++)
    {
        if(nums[i] == target)
        {
            result= min(result, abs(i-start));
        }
    }
    return result;
}

int main()
{
    vector<int> numbers;
    int size,number,target,start;
    cout<<"Enter the size: ";
    cin>>size;
    cout<<"Enter the starting number: ";
    cin>>start;
    cout<<"Enter the target number to be found: ";
    cin>>target;
    cout<<"Enter the elements: ";
    for(int i=0;i< size;i++)
    {
        cin>>number;
        numbers.push_back(number);
    }
    cout<<getMinDistance(numbers,target,start);
}