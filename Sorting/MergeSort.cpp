#include<bits/stdc++.h>

using namespace std;

void display(vector<int> numbers)
{
    cout<<"The sorted array is: ";
    for(int i=0;i< numbers.size();i++)
    {
        cout<<numbers[i]<<" ";
    }
}

void merge(vector<int>& arr, int left, int mid, int right)
{
    vector<int> tempOne, tempTwo;
    int sizeOne= mid-left+1;  // To find the size of the elements from zero or left of the array to mid.
    int sizeTwo=right-mid;   // To find the size of the elements from (mid + 1) to right or end of the array.

    for(int i=0;i< sizeOne;i++)
    {
        tempOne.push_back(arr[left+i]); // left to mid
    }
    for(int i=0;i< sizeTwo;i++)
    {
        tempTwo.push_back(arr[mid+1+i]); // (mid + 1) to right
    }
    int i=0;
    int j=0;
    int k=left;
    while(i< sizeOne && j< sizeTwo)
    {
        if(tempOne[i]< tempTwo[j])
        {
            arr[k]= tempOne[i];
            k++;
            i++;
        }
        else
        {
            arr[k]= tempTwo[j];
            k++;
            j++;
        }
    }
    while(i<sizeOne)
    {
        arr[k]= tempOne[i];
        k++;
        i++;
    }
    while(j<sizeTwo)
    {
        arr[k]= tempTwo[j];
        k++;
        j++;
    }
}

void mergeSort(vector<int>& arr, int left, int right)
{
    if(left < right)
    {
        int mid = (left + right)/2;
        mergeSort(arr, left, mid);          //T(n/2)
        mergeSort(arr,mid+ 1, right);       //T(n/2)

        merge(arr, left, mid, right);       //n
    }
}

int main()
{
    vector<int> numbers;
    int size,number;
    cout<<"Enter the size: ";
    cin>>size;
    cout<<"Enter the array elements: ";
    for(int i=0;i< size;i++)
    {
        cin>>number;
        numbers.push_back(number);
    }
    mergeSort(numbers,0, size-1);
    display(numbers);
    return 0;
}

//Asymptotic analysis.

// Time complexity -> O(nlog n).