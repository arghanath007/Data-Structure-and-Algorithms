#include<bits/stdc++.h>

using namespace std;


void sort(int n, int array[])
{
    int temp;
    for (int i = 0; i < n;i++)
    {
        for (int j = i + 1;j<n;j++)
        {
            if(array[i]>array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}


int LargeSmallSum(int arr[],int len)
{
    int even[len], odd[len];
    int even_count, odd_count;
    even_count=odd_count=0;
    if(len <= 3)
    {
        return 0;
    }
    even_count = 1;
    even[0] = arr[0];
    for (int i = 1; i < len;i++)
    {
        if(i%2==0)
        {
            even[even_count] = arr[i];
            even_count++;
        }
        else
        {
            odd[odd_count] = arr[i];
            odd_count++;
        }
    }
    sort(even_count,even);
    sort(odd_count,odd);
    return even[even_count-2]+odd[1];
}

int main()
{
    int len=0;
    cout << "Enter the length: ";
    cin >> len;
    int arr[len];
    cout<<"Enter the array elements: ";
    for (int i = 0;i<len;i++)
    {
        cin>>arr[i];
    }
    int sum=LargeSmallSum(arr,len);
    cout<<"The sum is: "<<sum;
}