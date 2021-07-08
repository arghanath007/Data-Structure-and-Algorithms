#include<bits/stdc++.h>

using namespace std;

int arraySign(vector<int>& nums) 
{
    int negativeCount=0;
    for(int i=0;i< nums.size();i++)
    {
        if(nums[i] == 0)
        {
            return 0;
        }
        else if(nums[i] < 0)
        {
            negativeCount++;
        }
    }
    if(negativeCount % 2 == 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int size,number;
    cout<<"Enter the size: ";
    cin>>size;
    vector<int> numbers;
    cout<<"Enter the numbers: ";
    for(int i=0;i<size;i++)
    {
        cin>>number;
        numbers.push_back(number);
    }
    int sign=arraySign(numbers);
    cout<<"The sign is: "<<sign;
    
}