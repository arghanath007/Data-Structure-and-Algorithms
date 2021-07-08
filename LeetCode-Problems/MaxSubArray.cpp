#include<bits/stdc++.h>

using namespace std;

//Basically, keep adding each integer to the sequence until the sum drops below 0.If sum is negative, then should reset the sequence and the sum as well. We are keeping the 

int maxSubArray(vector<int>& nums) 
{
    int sum=0;
    int answer= nums[0];
    for(int i=0;i< nums.size();i++)
    {
        sum+= nums[i];
        answer=max(sum, answer);
        sum= max(sum,0);
    }
    return answer;
}


int main()
{
    int size,number;
    cout<<"Enter the size: ";
    cin>>size;
    vector<int> numbers;
    cout<<"Enter the elements: ";
    for(int i=0;i< size;i++)
    {
        cin>>number;
        numbers.push_back(number);
    }
    cout<<maxSubArray(numbers);
}
