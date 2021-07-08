#include<bits/stdc++.h>

using namespace std;

int firstOccurance(int array[],int size, int i, int key)
{
    if(i == size)
    {
        return -1;
    }
    if(array[i] == key)
    {
        return i;
    }
    return firstOccurance(array,size, i+1, key);
}

int lastOccurance(int array[],int size, int i, int key)
{
    if(i == size)
    {
        return -1;
    }
    int restArray=lastOccurance(array,size, i+1,key);
    if(restArray !=-1)
    {
        return restArray;
    }
    if(array[i] == key)
    {
        return i;
    }
    return -1;
}

int main()
{
    int size, number;
    cout<<"Enter the size: ";
    cin>>size;
    cout<<"Enter the element to be found: ";
    cin>>number;
    int array[size];
    cout<<"Enter the elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    int result=firstOccurance(array,size, 0,number);
    if(result == -1)
    {
        cout<<"Element not found!!";
    }
    else
    {
        cout<<"Element found at: "<<result<<" index or "<<result + 1<<" position"<<endl;
    }
    result=lastOccurance(array,size, 0,number);
    if(result == -1)
    {
        cout<<"Element not found!!";
    }
    else
    {
        cout<<"Element found at: "<<result<<" index or "<<result + 1<<" position";
    }
    return 0;
}