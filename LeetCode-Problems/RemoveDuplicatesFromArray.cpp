#include<bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int>& nums) 
{
    if(nums.size() <2)
    {
        return nums.size();
    }
    int id=1;
    for(int i=1;i< nums.size();i++)
    {
        if(nums[i] != nums[i-1]) //If they are equal then we are moving on.
        {
            nums[id++]=nums[i];
        }
    }
    return id;


    // int count=0;
    // if(nums.size() < 2)
    // {
    //     return nums.size();
    // }
    // int j;
    // for(int i=0;i< nums.size()-1;i++)
    // {
    //     j=i+1;
    //     if(nums[i] == '_')
    //     {
    //         continue;
    //     }
    //     while (nums[i] == nums[j])
    //     {
    //         nums[j]='_';
    //         j++;
    //     }
    // }
    // sort(nums.begin(), nums.end());
    // for(int i=0;i< nums.size();i++)
    // {
    //     if(nums[i]=='_')
    //     {
    //         break;
    //     }
    //     count++;
    // }
    // cout<<nums.size();
    // return count;
}

int main()
{
    int size,number;
    cout<<"Enter the size of the array: ";
    cin>>size;
    vector<int> numbers;
    cout<<"Enter the array elements: ";
    for(int i=0;i< size;i++)
    {
        cin>>number;
        numbers.push_back(number);
    }
    cout<<"\nThe result is: "<<removeDuplicates(numbers);
    
}