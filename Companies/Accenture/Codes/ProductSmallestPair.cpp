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


int ProductSmallestPair(int sum, int array[], int len)
{
    if(len<2)
    {
        return -1;
    }
    sort(len,array);
    int pariSum=array[0] + array[1];
    if(pariSum<= sum)
    {
        return array[0] * array[1];
    }
    return 0;
}

int main()
{
    int sum,len;
    cout << "Enter the length: ";
    cin>>len;
    cout << "Enter the sum: ";
    cin >> sum;
    int arr[len];
    cout<<"Enter the array elements: ";
    for (int i = 0; i < len;i++)
    {
        cin>>arr[i];
    }
    int result = ProductSmallestPair(sum,arr,len);
    cout << "The result is: " <<result << endl;
}