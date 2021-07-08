#include<bits/stdc++.h>

using namespace std;

void AllPossibleSubSet(int subset[],int size)
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
void AllPossibleSubSet(char subset[],int size)
{
   for(int i=0;i<(1<<size);i++) 
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


int main()
{
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int array[size];
    char arrayChar[size];
    cout<<"Enter the array: ";
    // for(int i=0;i<size;i++)
    // {
    //     cin>>array[i];
    // }
    for(int i=0;i<size;i++)
    {
        cin>>arrayChar[i];
    }
    // AllPossibleSubSet(array, size);
    AllPossibleSubSet(arrayChar, size);

    return 0;
}
 

