#include<bits/stdc++.h>

using namespace std;

#define r 4
#define c 4


int max1s(bool arr[r][c])
{
    int j, max = 0;
    j = c - 1;
    for (int i = 0; i < r;i++)
    {
        bool flag = false;
        while(j>=0 && arr[i][j] == 1)
        {
            j--;
            flag = true;
        }
        if(flag)
        {
            max = i;
        }
    }
    if(max == 0 && arr[0][c-1]==0)
    {
        return -1;
    }
    return max;
}

int main()
{
    bool arr[r][c];
    cout << "Enter matrix: ";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c;j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<"The index is: "<<max1s(arr);
}