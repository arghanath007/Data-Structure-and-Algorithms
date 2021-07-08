#include<bits/stdc++.h>

using namespace std;

bool isCovered(vector<vector<int>>& ranges, int left, int right) 
{
    for(int i=left;i<=right;i++)
    {
        bool seen= false;
        for(int j=0;j< ranges.size() && !seen; j++)
        {
            if(i>= ranges[j][0] && i <= ranges[j][1])
            {
                seen= true;
            }
        }
        if(!seen)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<vector<int>> ranges;
    int left, right,sizeOne,sizeTwo, number;
    cout<<"Enter the size of the 2D array (One*Two): ";
    cin>>sizeOne>>sizeTwo;
    cout<<"Enter the left and right values: ";
    cin>>left>>right;
    cout<<"Enter the 2D array elements: ";
    for(int i=0;i< sizeOne;i++)
    {
        vector<int> temp;
        for(int j=0;j< sizeTwo;j++)
        {
            cin>>number;
            temp.push_back(number);
        }
        ranges.push_back(temp);
    }

    bool result= isCovered(ranges, left, right);
    if(result)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    //Printing the 2D vector.

    // for(int i=0;i<sizeOne;i++)
    // {
    //     for(int j=0;j<ranges[i].size();j++)
    //     {
    //         cout<<ranges[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<left<<" "<<right<<endl;

}