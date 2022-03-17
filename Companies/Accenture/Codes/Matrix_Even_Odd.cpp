#include<bits/stdc++.h>

using namespace std;


void sort(int arr[],int len)
{
    int temp;
    for (int i = 0; i < len - 1;i++)
    {
        for (int j = 0; j < len - i - 1;j++)
        {
            if (arr[j] > arr[j + 1]) // Ascending Order
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int Matrix_Even_Odd(int arr[],int len)
{
    int even[len], odd[len],sum=0,evenlen, oddlen;

    if(len%2==0)
    {
        evenlen=len/2;
        oddlen=len/2;
    }
    else
    {
        evenlen=len/2+1;
        oddlen=len/2;
    }
    for (int i = 0; i < len;i++)
    {
        if(i%2==0)
        {
            even[i/2]=arr[i];
        }
        else
        {
            odd[i/2]=arr[i];
        }
    }
    sort(even, evenlen);
    sort(odd,oddlen);
    cout<<"\nEven Elements are: ";
    for (int i = 0;i< evenlen;i++)
    {
        cout<<even[i]<<" ";
    }
    cout<<"\nOdd Elements are: ";
    for (int i = 0;i< oddlen;i++)
    {
        cout<<odd[i]<<" ";
    }

    if (evenlen>2)
    {
        if(oddlen>2)
        {
            sum=even[1] + odd[1];
        }
        else
        {
            sum=even[1] + odd[0];
        }
    }
    else
    {
        if(oddlen>2)
        {
            sum=even[0] + odd[1];
        }
        else
        {
            sum=even[0] + odd[0];
        }
    }
    return sum;

}


int main()
{
    int n;
    cout<<"Enter the length: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int result=Matrix_Even_Odd(arr,n);
    cout<<"\nThe sum is: "<<result;
}