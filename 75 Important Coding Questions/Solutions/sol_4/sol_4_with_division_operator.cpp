#include<bits/stdc++.h>

using namespace std;


void productElements(int nums[],int len)
{
    int product = 1;
    int result[len];
    for (int i = 0; i < len;i++)
    {
        product*=nums[i];
    }
    for (int i = 0; i < len;i++)
    {
        result[i]=product/nums[i];
    }
    for (int i = 0; i < len;i++)
    {
        cout << result[i] << endl;
    }
}


int main()
{
    int len;
    cout<<"Enter the length of the array: ";
    cin>>len;
    int nums[len];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<len;i++)
    {
        cin>>nums[i];
    }
    productElements(nums,len);
}