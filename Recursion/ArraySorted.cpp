#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int size)
{
    if(size == 1)
    {
        return true;
    }
    if(arr[0] > arr[1])
    {
        return false;
    }
    bool restArray=sorted(arr + 1,size-1);
    //return (arr[0] < arr[1] && restArray);
    return restArray;
}

int main()
{
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int array[size];
    cout<<"Enter the elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    bool result= sorted(array,size);
    if(result)
    {
        cout<<"Sorted!!!";
    }
    else
    {
        cout<<"Not sorted: ";
    }
}