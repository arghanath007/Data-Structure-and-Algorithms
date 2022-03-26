#include<bits/stdc++.h>

using namespace std;


vector<int> productExceptSelf(vector<int>& nums)
{
    int len = nums.size();
    int begins= 1;
    int ends= 1;

    vector<int> result(len,1);

    for (int i = 0; i < len;i++)
    {
        result[i]*=begins;
        begins*=nums[i];
        result[len-1-i]*=ends;
        ends*=nums[len-1-i];
    }

    return result;
}

int main()
{
    int len;
    cout << "Enter the length: ";
    cin>>len;
    vector<int> nums(len);
    cout << "Enter the elements: ";
    for(int i=0;i<len;i++)
    {
        cin>>nums[i];
    }
    vector<int> result = productExceptSelf(nums);
    for (int i = 0; i < len;i++)
    {
        cout << result[i] << endl;
    }
}