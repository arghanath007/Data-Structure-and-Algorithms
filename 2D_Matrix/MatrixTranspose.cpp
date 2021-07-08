#include <bits/stdc++.h>
using namespace std;

void display(const vector<vector<int>>& matrix, int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout<<matrix[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void spiralOrderMatrix(vector<vector<int>>& matrix, int size)
{
    for(int i=0;i< size;i++ )
    {
        for(int j=i;j< size;j++)
        {
            int temp=matrix[i][j];
            matrix[i][j]= matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    display(matrix, size);
}


int main()
{
    int size,number;
    cout<<"Enter the size of  the square matrix: ";
    cin>>size;
    cout<<"Enter the matrix elements of size: ";
    vector<vector<int>> matrix(size, vector<int>(size));
    for(int i=0;i<size;i++)
    {
        for(int j=0;j< size;j++)
        {
            cin>>matrix[i][j];
        }
    }
    display(matrix, size); 
    spiralOrderMatrix(matrix,size);
}