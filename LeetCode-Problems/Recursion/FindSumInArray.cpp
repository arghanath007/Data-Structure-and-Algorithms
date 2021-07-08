#include<bits\stdc++.h>
using namespace std;

void merge(vector<int>& arr, int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    // int left[n1], right[n2];
    vector<int> left(n1);
    vector<int> right(n2);
    for (int i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[m + 1 + j];
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr,int l,int r){
    if(l>=r){
        return;
    }
    int m =l+ (r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}

// void printArray(vector<int>& array, int size)
// {
//     for (int i = 0; i < size; i++)
//         cout << array[i] << " ";
// }

vector<int> twoSum(vector<int>& nums, int target) 
{
    // int temp,i,j;
    vector<int> tempNums;
    tempNums=nums;

    //It worked with bubble sort but bubble sort is O(n^2). So I tried a better sorting algorithm Merge Sort whose complexity is O(nlogn)
    // for(i=0;i< nums.size()-1;i++)
    // {
    //     for(j=0;j< nums.size() -i-1;j++)
    //     {
    //         if(nums[j] > nums[j+1])
    //         {
    //             temp = nums[j];
    //             nums[j]= nums[j+1];
    //             nums[j+1]=temp;
    //         }
    //     }
    // }

    mergeSort(nums, 0, nums.size()-1);
    // cout << "\nSorted array is \n";
    // printArray(nums, nums.size());

    // cout<<endl;
    // for(int i=0;i<nums.size();i++)
    // {
    //     cout<<nums[i]<<" ";
    // }

    // cout<<"\nOriginal Arrray: "<<endl;
    // for(int i=0;i<tempNums.size();i++)
    // {
    //     cout<<tempNums[i]<<" ";
    // }
    // cout<<endl;

    vector<int> index;
    vector<int> numbers;
    int low=0;
    int high= nums.size()-1;
    while(low < high)
    {
        if(nums[low] + nums[high] == target)
        {
            // index.push_back(low);
            // index.push_back(high);
            numbers.push_back(nums[low]);
            numbers.push_back(nums[high]);
            break;
        }
        else if(nums[low] + nums[high] < target)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    for(int i=0;i<tempNums.size();i++)
    {
        if(tempNums[i] == numbers[0])
        {
            index.push_back(i);
        }
        else if(tempNums[i] == numbers[1])
        {
            index.push_back(i);
        }
    }
    return index;
}

int main()
{
    int size,number,target;
    cout<<"Enter the size: ";
    cin>>size;
    cout<<"Enter the target to be found: ";
    cin>>target;
    vector<int> numbers;
    vector<int> result;
    cout<<"Enter the array elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>number;
        numbers.push_back(number);
    }
    result= twoSum(numbers, target);
    cout<<"\nThe index are: "<<endl;
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<endl;
    }
}
