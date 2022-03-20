#include<bits/stdc++.h>

using namespace std;


void MaxInArray(int arr[],int length)
{
    int pos = 0,max = arr[0];
    for (int i = 0; i < length;i++)
    {
        for (int j = i + 1; j < length;j++)
        {
            if(arr[j]> max)
            {
                max = arr[j];
                pos = j;
            }
            else
            {
                continue;
            }
        }
    }
    cout << "\n"
         << max << "\n"
         << pos;
}

int main()
{
    int length;
    cout << "Enter the length: ";
    cin>>length;
    int arr[length];
    cout << "Enter the array elements: ";
    for (int i = 0; i < length;i++)
    {
        cin>>arr[i];
    }
    MaxInArray(arr,length);
}