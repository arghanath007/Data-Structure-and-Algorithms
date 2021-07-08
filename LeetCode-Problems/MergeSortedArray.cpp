#include<bits/stdc++.h>

using namespace std;

 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
    for(int i=m;i< m +n;i++)
    {
        nums1[i]=nums2[i-m];
    }
    sort(nums1.begin(), nums1.end());
}

int main()
{
    int sizeOne,sizeTwo,numberOne, numberTwo;
    cout<<"Enter the size of the 2nd array: ";
    cin>>sizeTwo;
    vector<int> nums2(sizeTwo);
    cout<<"Enter the 2nd array elements in ascending order: ";
    for(int i=0;i< sizeTwo;i++)
    {
        cin>>numberTwo;
        nums2.push_back(numberTwo);
    }
    cout<<"Enter the size of the 1st array: ";
    cin>>sizeOne;
    vector<int> nums1(sizeOne + sizeTwo);
    cout<<"Enter the 1st array elements in ascending order: ";
    for(int i=0;i< sizeOne;i++)
    {
        cin>>numberOne;
        nums1.push_back(numberOne);
    }
    
    merge(nums1,sizeOne, nums2, sizeTwo);
    cout<<"\nThe sorted array is: \n";
    for(int i=0;i< sizeOne;i++)
    {
        cout<<nums1[i]<<" ";
    }
}