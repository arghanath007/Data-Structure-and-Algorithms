#include<bits/stdc++.h>

using namespace std;

int UniqueNumber(int array[],int size)
{
    int xorSum=0;
    for(int i=0;i< size;i++)
    {
        xorSum^=array[i];
    }
    return xorSum;
}
 
int main()
{
    int size;
    cout<<"Enter the size: ";
    cin>>size;
     int* array=new int[size]; // array declaraing with 'new' keyword.
    cout<<"Enter the array: ";
    for(int i=0;i< size;i++)
    {
        cin>>array[i];
    }
    cout<<"The Unique Number is: "<<UniqueNumber(array,size)<<endl;
    return 0;
}
 

