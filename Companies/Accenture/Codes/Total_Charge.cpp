#include<bits/stdc++.h>

using namespace std;

int Total_Charge(int arr1[],char arr2[],int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        if(arr2[i] == 'P' or arr2[i]=='p')
        {
            sum+=arr1[i];
        }
        else
        {
            sum-=arr1[i];
        }
    }
    return abs(sum*100);
}

int main()
{
    int len;
    cout << "Enter the length: ";
    cin >> len;
    int arr[len];
    char arr2[len];
    cout<<"Enter the values: ";
    for (int i = 0; i < len;i++)
    {
        cin >> arr[i];
    }
    cout<<"Enter the charges: ";
    for (int i = 0; i < len;i++)
    {
        cin >> arr2[i];
    }
    cout<<"The maximum net electrostatic field is: "<<Total_Charge(arr,arr2,len)<<endl;
}