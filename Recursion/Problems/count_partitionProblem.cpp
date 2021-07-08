#include<bits/stdc++.h>

using namespace std;

int countPartition(int sizeOne, int sizeTwo)
{
    if(sizeOne == 0)
    {
        return 1; //Since it will be partition which includes no partitions.
    }
    else if(sizeTwo ==0 || sizeOne < 0)
    {
        return 0;
    }
    else
    {
        return (countPartition(sizeOne-sizeTwo, sizeTwo) + countPartition(sizeOne, sizeTwo-1));
    }
}

int main()
{
    int sizeOne, sizeTwo;
    cout<<"Enter the count of partitions: ";
    cin>>sizeOne>>sizeTwo;
    cout<<"The count of partitions are: "<<countPartition(sizeOne, sizeTwo);
}