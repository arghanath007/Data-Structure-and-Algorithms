#include<bits/stdc++.h>

using namespace std;

int removeElement(vector<int>& nums, int element) 
{
    int id=0;
    for(int i=0;i< nums.size();i++)
    {
        if(nums[i]!= element)
        {
            nums[id++]=nums[i];
        }
    }
    return id;
}

int main()
{
    int size,number;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int element;
    cout<<"Enter the element to be deleted: ";
    cin>>element;
    vector<int> numbers;
    cout<<"Enter the array elements: ";
    for(int i=0;i< size;i++)
    {
        cin>>number;
        numbers.push_back(number);
    }
    cout<<"\nThe result is: "<<removeElement(numbers, element);
    
}