#include<bits/stdc++.h>

using namespace std;

bool isSafe(int** arr, int x, int y, int size) //Dynamically allocating the memory of the array.
{
    if(x< size && y<size && arr[x][y] ==1)
    {
        return true;
    }
    return false;
}

bool RatInMaze(int** arr, int x, int y, int size, int** solArr)
{
    if(x == size-1 && y == size-1)
    {
        solArr[x][y]=1;
        return true;
    }
    if(isSafe(arr,x,y,size))
    {
        solArr[x][y]=1;
        if(RatInMaze(arr, x+1,y,size, solArr))
        {
            return true;
        }
        if(RatInMaze(arr, x,y+1,size, solArr))
        {
            return true;
        }
        solArr[x][y]=0; //Back-tracking.
        return false;
    }
    return false;

}
int main()
{
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int** arr=new int*[size]; //Dynamically allocation the size of the array.
    for(int i=0;i<size;i++)
    {
        arr[i]=new int[size];
    }
    cout<<"Enter the Maze: ";
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cin>>arr[i][j];
        }
    }
    int** solArr= new int*[size];
     for(int i=0;i<size;i++)
    {
        solArr[i]=new int[size];
        for(int j=0;j<size;j++)
        {
            solArr[i][j]=0;
        }
    }
    cout<<endl;
    if(RatInMaze(arr,0,0,size, solArr))
    {
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                cout<<solArr[i][j]<<" ";
            }
            cout<<endl;  
        }     
    }
}

// 1 0 1 0 1 -> Example Maze.
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1