#include<bits/stdc++.h>

using namespace std;

//Looks similar to fibonacci Series or sequence.

int tilingWays(int size)
{
    if(size == 0 || size ==1)
    {
        return size;
    }
    return(tilingWays(size-1) + tilingWays(size-2)); // (size-1) -> vertical tile placement and (size-2) -> Horizontal tile placement.
}
int main()
{
    int size;
    cout<<"Enter the size of the block: ";
    cin>>size;
    int result=tilingWays(size);
    cout<<"The possible ways are: "<<result<<endl;
}