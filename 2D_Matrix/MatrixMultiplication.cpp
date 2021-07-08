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
    cout<<endl;
}

void matrixMulti(vector<vector<int>>& matrixOne,vector<vector<int>>& matrixTwo, int sizeOne, int sizeTwo, int sizeThree)
{
    vector<vector<int>> result(sizeOne, vector<int>(sizeThree));
    for(int i=0;i<sizeOne;i++)
    {
        for(int j=0;j< sizeThree;j++)
        {
            result[i][j]=0;
        }
    }
    for(int i=0;i<sizeOne;i++)
    {
        for(int j=0;j< sizeThree;j++)
        {
            for(int k=0;k<sizeTwo;k++)
            {
                result[i][j]+= matrixOne[i][k] *matrixTwo[k][j];
            }
        }
    }
    display(result, sizeOne, sizeThree);
}


int main()
{
    int sizeOne,sizeTwo, sizeThree,number;
    cout<<"Enter the size of  both of the  matrix (n1,n2) && (n2,n3): ";
    cin>>sizeOne>>sizeTwo>>sizeThree;
    cout<<"Enter the matrix elements of the 1st matrix: ";
    vector<vector<int>> matrixOne(sizeOne, vector<int>(sizeTwo));
    for(int i=0;i<sizeOne;i++)
    {
        for(int j=0;j< sizeTwo;j++)
        {
            cin>>matrixOne[i][j];
        }
    }
    cout<<"Enter the matrix elements of the 2nd matrix: ";
    vector<vector<int>> matrixTwo(sizeTwo, vector<int>(sizeThree));
    for(int i=0;i<sizeTwo;i++)
    {
        for(int j=0;j< sizeThree;j++)
        {
            cin>>matrixTwo[i][j];
        }
    }
    display(matrixOne, sizeOne, sizeTwo); 
    display(matrixTwo, sizeTwo, sizeThree); 
    matrixMulti(matrixOne, matrixTwo,sizeOne, sizeTwo, sizeThree);
}