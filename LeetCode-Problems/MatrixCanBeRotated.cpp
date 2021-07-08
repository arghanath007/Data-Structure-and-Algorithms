#include<bits/stdc++.h>

using namespace std;

 bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) 
{
    bool count[4];
    memset(count, true, sizeof(count));
    int size= mat.size();
    for(int i=0;i<size;i++)
    {
        for(int j=0;j< size;j++)
        {
            if(mat[i][j] != target[i][j])
            {
                count[0]=false;
            }
            if(mat[i][j] != target[size-j-1][i])
            {
                count[1]=false;
            }
            if(mat[i][j] != target[size-i-1][size-j-1])
            {
                count[2]=false;
            }
            if(mat[i][j] != target[j][size-i-1])
            {
                count[3]=false;
            }
        }
    }
    return count[0] ||count[1] || count[2] || count[3];
}

int main()
{
    vector<vector<int>> mat, target;
    int size,number;
    cout<<"Enter the size: ";
    cin>>size;
    cout<<"\nEnter the matrix: ";
    for(int i=0;i< size;i++)
    {
        vector<int> temp;
        for(int j=0;j< size;j++)
        {
            cin>>number;
            temp.push_back(number);
        }
        mat.push_back(temp);
    }
    cout<<"\nEnter the target matrix: \n";
    for(int i=0;i< size;i++)
    {
        vector<int> temp;
        for(int j=0;j< size;j++)
        {
            cin>>number;
            temp.push_back(number);
        }
        target.push_back(temp);
    }
    cout<<"\nThe matrix is: \n";
    for(int i=0;i< size;i++)
    {
        for(int j=0;j< mat[i].size();j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nThe Target matrix is: \n";
    for(int i=0;i< size;i++)
    {
        for(int j=0;j<target[i].size();j++)
        {
            cout<<target[i][j]<<" ";
        }
        cout<<endl;
    }
    bool result= findRotation(mat, target);
}