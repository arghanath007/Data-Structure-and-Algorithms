#include<bits/stdc++.h>

using namespace std;

void waveSort(vector<int>& array)
{
    for(int i=1;i<array.size();i+=2)
    {
        if(array[i] > array[i-1])
        {
            swap(array[i], array[i-1]);
        }
        if(array[i] > array[i+1] && i<=array.size()-2)
        {
            swap(array[i], array[i+1]);
        }
    }
}

int main()
{
    int size,number;
    cout<<"Enter the size: ";
    cin>>size;
    vector<int> array;
    cout<<"Enter the elements: ";
    for(int i=0;i< size;i++)
    {
        cin>>number;
        array.push_back(number);
    }
    waveSort(array);
    cout<<"\nAfter sorting:\n";
    for(int i=0;i< size;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}

//Time complexity is O(n/2) ~ O(n).