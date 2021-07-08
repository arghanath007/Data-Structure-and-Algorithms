#include<bits/stdc++.h>

using namespace std;


int countPathMaze(int size, int i, int j)
{
    if(i == size-1 && j == size-1)
    {
        return 1;
    }
    if( i == size || j == size)
    {
        return 0;
    }
    return (countPathMaze(size, i+1,j) + countPathMaze(size, i, j+1));
}
int main()
{
    int limit, startOne, startTwo;
    cout<<"Enter the size: ";
    cin>>limit;
    cout<<"Enter the two starting points: ";
    cin>>startOne>>startTwo;
    int result=countPathMaze(limit, startOne, startTwo);
    if(result == 1)
    {
        cout<<"We reached the end of the maze: ";
    }
    else if(result == 0)
    {
        cout<<"We have come out of the maze and any other movement not possible: ";
    }
    else
    {
        cout<<"The possible paths of the maze are: "<<result<<endl; 
    }
}