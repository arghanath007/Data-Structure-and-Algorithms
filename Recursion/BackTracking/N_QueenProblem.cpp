#include<bits/stdc++.h>

using namespace std;

bool isSafe(int** board, int rowPos, int colPos, int size)
{
    //Checking column
    for(int row=0;row< rowPos;row++)
    {
        if(board[row][colPos] == 1)
        {
            return false;
        }
    }

    //Left Diagonal Check
    int row= rowPos;
    int col= colPos;
    while(row>=0 && col>=0)
    {
        if(board[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }

    //Right Diagonal Check
    row= rowPos;
    col= colPos;
    while(row>=0 && col< size)
    {
        if(board[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool nQueen(int** board, int rowPos,int size) //We dont need colPos here as we know that if we place a Queen at a particular row and then we will jump to the next row so we will not be checking the further columns of that row.
{
    if(rowPos >= size)
    {
        return true;
    }
    for(int col=0;col< size;col++)
    {
        if(isSafe(board,rowPos, col,size))
        {
            board[rowPos][col]=1;
            if(nQueen(board,rowPos+1,size))
            {
                return true;
            }
            board[rowPos][col]=0; //backtracking
        }  
    }
    return false;
}

int main()
{
    int size;
    cout<<"Enter the size of the problem: ";
    cin>>size;
    int **board=new int*[size];
    for(int i=0;i< size;i++)
    {
        board[i]=new int[size];
        for(int j=0;j< size;j++)
        {
            board[i][j]=0;
        }
    }
    if(nQueen(board,0, size))
    {
        for(int i=0;i< size;i++)
        {
            for(int j=0;j< size;j++)
            {
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}