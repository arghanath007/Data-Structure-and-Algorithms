#include<bits/stdc++.h>

using namespace std;

vector<int> TwoSumTwo(vector<int>& numbers, int target)
{
    int len = numbers.size();
    int left = 0;
    int right= len-1;
    int sum = 0;
    while(left < right)
    {
        sum = numbers[left] + numbers[right];
        if(sum == target)
        {
            return {left+1,right+1};
        }
        else if(sum > target)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    return {};
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
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    vector<int> result=TwoSumTwo(nums, target);
    for (int i = 0; i < result.size();i++)
    {
        cout << result[i] <<endl;
    }
}