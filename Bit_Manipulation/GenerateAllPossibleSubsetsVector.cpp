#include<bits/stdc++.h>

using namespace std;

void AllPossibleSubSet(vector<int>& subset,int size)
{
   for(int i=0;i< (1<<size);i++)
   {
       for(int j=0;j<size;j++)
       {
           if((i & (1<<j)) !=0)
           {
               cout<<subset[j]<<" ";
           }
       }
       cout<<endl;
   }
}


void AllPossibleSubSetChar(vector<char>& subset, int size)
{
   for(int i=0;i< (1<<subset.size());i++)
   {
       for(int j=0;j<subset.size();j++)
       {
           if((i & (1<<j)) !=0)
           {
               cout<<subset[j]<<" ";
           }
       }
       cout<<endl;
   }
}


int main()
{
    int size,number;
    char ch;
    cout<<"Enter the size: ";
    cin>>size;
    vector<int> array;
    vector<char> arrayChar;
    cout<<"Enter the array: ";
    // for(int i=0;i<size;i++)
    // {
    //     cin>>array[i];
    // }
    for(int i=0;i<size;i++)
    {
        // getchar(ch);
        cin>>ch;
        arrayChar.push_back(ch);
    }
    // AllPossibleSubSet(array, size);
    AllPossibleSubSetChar(arrayChar, arrayChar.size());

    return 0;
}
 

