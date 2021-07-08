#include<iostream>
#include<vector>


using namespace std;

void countSort(vector<int>& array)
{
    int biggest=array[0];
    for(int i=0;i< array.size();i++)
    {
        biggest=max(biggest, array[i]);
    }
    vector<int> count(biggest + 1, 0);
    for(int i=0;i< array.size();i++)
    {
        count[array[i]]++; //counting the frequency of numbers.
    }

    // cout<<endl;
    // for(int i=0;i< size;i++)
    // {
    //     cout<< array[i]<<" ";
    // }

    for(int i=1;i<=biggest;i++) //counting the positions 
    {
        count[i]+= count[i-1];
    }

    // cout<<endl;
    // for(int i=0;i< count.size();i++)
    // {
    //     cout<< count[i]<<" ";
    // }

    vector<int> tempArray;
    for(int i= array.size()-1;i>=0;i--)
    {
        tempArray[--count[array[i]]]=array[i]; //Putting the numbers in their correct positions.
    }

    // cout<<endl;
    // for(int i=0;i< size;i++)
    // {
    //     cout<< array[i]<<" ";
    // }

    for(int i=0;i< array.size();i++)
    {
        array[i]= tempArray[i];
    }

    // cout<<endl;
    // for(int i=0;i< size;i++)
    // {
    //     cout<< array[i]<<" ";
    // }
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

    countSort(array);
    cout<<endl;
    for(int i=0;i< size;i++)
    {
        cout<< array[i]<<" ";
    }
    return 0;
}