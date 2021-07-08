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

void spiralOrderMatrix(vector<vector<int>>& matrix, int sizeOne, int sizeTwo)
{
    int row_start=0,column_start=0, row_end=sizeOne-1,column_end=sizeTwo-1;
    while(row_start <= row_end && column_start<= column_end)
    {
        //For row_start
        //(0,0) (0,1) (0,2) ....(0,sizeOne-1)
        for(int col=column_start; col<= column_end; col++)
        {
            cout<<matrix[row_start][col]<<" ";
        }
        row_start++;


        //For column_end
        //(0,n-1)
        //(1,n-1)
        //(2,n-1)
        //....
        //(m-1,n-1)
        for(int row=row_start;row <= row_end;row++)
        {
            cout<<matrix[row][column_end]<<" ";
        }
        column_end--;


        //For row_end
        //(n-1,0) (n-1,1) (n-1,2) ..... (n-1,m-1)
        for(int col=column_end; col>= column_start; col--)
        {
            cout<<matrix[row_end][col]<<" ";
        }
        row_end--;


        //For column_start
        //(1,0)
        //(2,0)
        //(3,0)
        //....
        //(n-1,0)
        for(int row=row_end;row>=row_start;row--)
        {
            cout<<matrix[row][column_start]<<" ";
        }
        column_start++;
    }
}


int main()
{
    int sizeOne, sizeTwo,number;
    cout<<"Enter the size of  the matrix(n,m): ";
    cin>>sizeOne>>sizeTwo;
    cout<<"Enter the matrix elements of size "<<sizeOne<<","<< sizeTwo;
    vector<vector<int>> matrix(sizeOne, vector<int>(sizeTwo));
    for(int i=0;i<sizeOne;i++)
    {
        for(int j=0;j< sizeTwo;j++)
        {
            cin>>matrix[i][j];
        }
    }
    display(matrix, sizeOne,sizeTwo); 
    spiralOrderMatrix(matrix,sizeOne, sizeTwo);
}