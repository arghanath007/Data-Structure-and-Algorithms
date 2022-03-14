#include<bits/stdc++.h>

using namespace std;

int FindCount(int arr[], int length, int num, int diff)
{
    int count = 0, remainder;
    for (int i = 0;i<length;i++)
    {
        remainder = abs(arr[i]-num);
        if(remainder<=diff)
        {
            count++;
        }    
    }
    if(count==0)
    {
        return -1;
    }
    return count;
}

int main()
{
    int len;
    cout << "Enter the length: ";
    cin >> len;
    int arr[len];
    cout<<"Enter the elements of the array: ";
    for (int i = 0;i< len;i++)
    {
        cin>>arr[i];
    }
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int diff;
    cout<<"Enter the difference: ";
    cin>>diff;
    int count = FindCount(arr, len, num, diff);
    cout<<"The result is: "<<count;
}
