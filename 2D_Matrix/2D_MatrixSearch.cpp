#include <bits/stdc++.h>
using namespace std;

void display(const vector<vector<int>>& matrix, int sizeOne, int sizeTwo)
{
    for(int i=0;i<sizeOne;i++)
    {
        for(int j=0;j<sizeTwo;j++)
        {
            cout<<matrix[i][j]<<"   ";
        }
        cout<<endl;
    }
}

bool matrixSearch(vector<vector<int>>& matrix, int sizeOne, int sizeTwo, int target)
{
    int row=0, col=sizeTwo-1;
    while(row < sizeOne && col >= 0)
    {
        if(matrix[row][col] == target)
        {
            return true;
        }
        else if(matrix[row][col] > target)
        {
            col--;
        }
        else
        {
            row++;
        }
    }
    return false;
}


int main()
{
    int sizeOne, sizeTwo,target;
    cout<<"Enter the size of  the matrix(n,m): ";
    cin>>sizeOne>>sizeTwo;
    cout<<"Enter the target value to be found: ";
    cin>>target;
    cout<<"Enter the matrix elements of size "<<sizeOne<<","<< sizeTwo<<":"<<endl;
    vector<vector<int>> matrix(sizeOne, vector<int>(sizeTwo));
    for(int i=0;i<sizeOne;i++)
    {
        for(int j=0;j< sizeTwo;j++)
        {
            cin>>matrix[i][j];
        }
    }
    display(matrix, sizeOne,sizeTwo); 
    bool result=matrixSearch(matrix,sizeOne, sizeTwo, target);
    if(result == true)
    {
        cout<<"Element Found";
    }
    else
    {
        cout<<"Element not found";
    }
}

//The brute force approach of this problem will be O(nm) for time complexity as 'n' and 'm' are the size of the matrix.