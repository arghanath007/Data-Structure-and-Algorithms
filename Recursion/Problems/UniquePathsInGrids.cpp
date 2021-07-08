#include<bits/stdc++.h>

using namespace std;

int UniquePaths(int sizeOne, int sizeTwo)
{
    if(sizeOne == 1 || sizeTwo == 1)
    {
        return 1;
    }
    else
    {
        return (UniquePaths(sizeOne, sizeTwo-1) + UniquePaths(sizeOne-1, sizeTwo));
    }
}

int main()
{
    int sizeOne, sizeTwo;
    cout<<"Enter the size of the grid: ";
    cin>>sizeOne>>sizeTwo;
    cout<<"The Unique paths are: "<<UniquePaths(sizeOne, sizeTwo);
}