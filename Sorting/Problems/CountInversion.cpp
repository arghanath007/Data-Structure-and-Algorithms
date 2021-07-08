#include<bits/stdc++.h>

using namespace std;

void bruteForceApproach( vector<int> array)
{
    int count=0;
    for(int i=0;i< array.size();i++)
    {
        for(int j=i+1;j< array.size();j++)
        {
            if(array[i] > array[j])
            {
                count++;
            }
        }
    }
    cout<<"The count is: "<<count;
}

int merge(vector<int> array,vector<int> temp , int low, int mid, int high)
{
    int i,j,k;
    int inversionCount=0;
    i=low;
    j=mid;
    k=low;
    while(i <= mid-1 && j<=high)
    {
        if(array[i] <= array[j])
        {
            temp[k]=array[i];
            k++,i++;
        }
        else
        {
            temp[k]=array[j];
            k++, j++;
        }
        inversionCount+=(mid-i); // adding/counting all of remaining elements from the left sub-array(i) as they are bigger than the current right sub-array(j) element. (a[i] > a[j])
    }
    while (i<= mid-1)
    {
        temp[k]= array[i];
        k++,i++;
    }
    while (j<= high)
    {
        temp[k]= array[j];
        k++,j++;
    }
    for(i=low; i<= high;i++)
    {
        array[i]=temp[i];
    }
    return inversionCount;
}

int mergeSort(vector<int> array,vector<int> temp , int low, int high)
{
    int mid, inversionCount=0;
    if(low < high)
    {
        mid= low + (high-low)/2;
        inversionCount+= mergeSort(array,temp, 0 , mid);
        inversionCount+= mergeSort(array,temp,mid +1,high);
        inversionCount+= merge(array,temp,low,mid +1,high);
    }
    return inversionCount;
}

int main()
{
    int size,number;
    cout<<"Enter the size: ";
    cin>>size;
    vector<int> array,temp;
    cout<<"Enter the elements: ";
    for(int i=0;i< size;i++)
    {
        cin>>number;
        array.push_back(number);
    }
    // bruteForceApproach(array);
    int result= mergeSort(array, temp, 0, array.size()-1);
}


//Time Complexity: O(n log n), The algorithm used is divide and conquer, So in each level, one full array traversal is needed, and there are log n levels, so the time complexity is O(n log n).
// Space Complexity: O(n), Temporary array.