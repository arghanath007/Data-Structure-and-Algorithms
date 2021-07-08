#include<iostream>
#include<vector>

using namespace std;

void countSort(vector<int>& arr, int size)
{
    int i,j;
    int maxElement= arr[0];
    for(int i=0;i< size;i++)
    {
        maxElement= max(maxElement, arr[i]); // max element in the vector.
    }
    vector<int> count(maxElement +1, 0); //initializing the count vector with '0' in all the indexes.
    for(i=0;i< size;i++)
    {
        // count[arr[i]]= count[arr[i+1]] + 1;
        count[arr[i]]++; //counting the frequency of elements.
    }
    i=0; //counter for count array
    j=0; //counter for given array(arr)
    while(i <= maxElement)
    {
        if(count[i] > 0)
        {
            arr[j]=i;
            count[i]--;
            j++;
        }
        else
        {
            i++;
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

    cout<<endl;
    for(int i=0;i< size;i++)
    {
        cout<< array[i]<<" ";
    }

    countSort(array, size);
    cout<<endl<<"Sorted Array:\n";
    for(int i=0;i< size;i++)
    {
        cout<< array[i]<<" ";
    }
} 

//'m' -> max element in the vector. 'n' -> Size of the vector.
//Time Complexity O(m+n) ~ O(n) which is 'linear' and better than the time complexity of other sorting algorithms. It is changed from O(m+n) -> O(n) because when the value of 'n' is very large then the value of 'm' is nothing compared to 'n' so 'm' becomes negligible that's why it becomes O(n). 
//It is not used that much because it comes at the cost of Extra space i.e space complexity is high.
// In the previous sorting algorithms we have done merge,quick, bubble, insertion, heap sort we didnt knew nothing about the input types whether they were int, strings, objects, float or anything else but in this counting sort algorithm we know that the input is positive integers, it is something special.