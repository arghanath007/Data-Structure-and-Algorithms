#include<bits/stdc++.h>

using namespace std;

void swap(vector<int>& array, int indexOne, int indexTwo)
{
    int temp= array[indexOne];
    array[indexOne]= array[indexTwo];
    array[indexTwo]= temp;
}

int partitionFunc(vector<int>& array, int low, int high)
{
    int pivot= array[high];
    int i= low-1;
    for(int j=low;j< high;j++)
    {
        if(array[j] < pivot)
        {
            i++;
            swap(array, i,j); //sending the position as i,j
        }
    }
    swap(array, i+1, high); //sending the position as i and high.
    return i+1;
}

void quickSort(vector<int>& array, int low, int high)
{
    if(low < high)
    {
        int pivotIndex= partitionFunc( array, low, high);
        quickSort(array, low, pivotIndex-1);
        quickSort(array, pivotIndex+1, high);
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
    cout<<"\nBefore sorting:\n";
    for(int i=0;i< size;i++)
    {
        cout<<array[i]<<" ";
    }
    quickSort(array,0, size-1);
    cout<<"\nAfter sorting:\n";
    for(int i=0;i< size;i++)
    {
        cout<<array[i]<<" ";
    }
}

//Best case(Pivot is median) -> O(nlogn)
//Worst case(Last element) -> O(n^2)