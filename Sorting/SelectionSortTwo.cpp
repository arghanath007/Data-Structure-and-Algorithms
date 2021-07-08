#include <bits/stdc++.h>

using namespace std;

void Display(vector<int> array, int n)
{
    vector<int>::iterator i;
    for(i= array.begin(); i != array.end(); i++)
    {
        cout<<*i<<endl;
    }
}


void SelectionSort(vector<int> arr, int n)
{
    int small,s,count;
    for(int i=0; i<n-1;i++)
    {
        small= arr[i];
        for(int j = i+1; j<n;j++)
        {
         if(arr[j]<small)
            {
                small = arr[j];
                s = j;
                count=1;
            }
        }
       if(count ==1)
        {
            arr[s] = arr[i];
            arr[i]= small;
        }
        count=0;
    }
    Display(arr, arr.size());
}


int main()
{
    int n,number;
    cout<<"Enter the limit: ";
    cin>>n;
    vector<int> array;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>number;
        array.push_back(number);
    }
    cout<<"\nBefore Sorting and Printing: \n";
    Display(array, array.size());
    cout<<"\nAfter Sorting and Printing: \n";
    SelectionSort(array, array.size());
    return 0;
    
}