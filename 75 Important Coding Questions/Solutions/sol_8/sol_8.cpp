#include<bits/stdc++.h>

using namespace std;

int search(vector<int>& nums, int target)
{
    int len=nums.size();
    for (int i = 0; i < len;i++)
    {
        if(nums[i]== target)
        {
            return i;
        }
    }
    return -1;
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
    int result=search(nums, target);
    if(result == -1)
    {
        cout<<"Not found";
    }
    else
    {
        cout<<"Found at index: "<<result;
    }

}