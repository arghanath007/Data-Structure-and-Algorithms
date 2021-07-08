#include<bits/stdc++.h>

using namespace std;

void DNF(vector<int>& array)
{
    int low=0, mid=0, high=array.size()-1;
    while(mid<= high)
    {
        if(array[mid] == 0)
        {
            swap(array[low], array[mid]);
            low++, mid++;
        }
        else if(array[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(array[mid], array[high]);
            high--;
        }
    }
}

int main()
{
    int size,number;
    cout<<"Enter the size: ";
    cin>> size;
    vector<int> array;
    cout<<"Enter the elements: ";
    for(int i=0;i< size;i++)
    {
        cin>>number;
        array.push_back(number);
    }
    for(int i=0;i< size;i++)
    {
        cout<<array[i]<<" ";
    }
    DNF(array);
    cout<<"\nAfter sorting:\n";
    for(int i=0;i< size;i++)
    {
        cout<<array[i]<<" ";
    }
}

//Time complexity -> O(n), 'n' is the size of the vector.