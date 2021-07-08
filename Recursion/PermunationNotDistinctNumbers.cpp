#include<bits/stdc++.h>

using namespace std;

void helper(vector<int> permutation,  vector<vector<int>> &ans, int index)
{
    if(index == permutation.size())
    {
        ans.push_back(permutation);
        return;
    }
    for(int i=index;i< permutation.size();i++)
    {
        if(i != index and permutation[i] == permutation[index])
        {
            continue;
        }
        swap(permutation[i], permutation[index]);
        helper(permutation,ans, index +1);
    }
}

vector<vector<int>> permutationFunc(vector<int> permutation)
{
    sort(permutation.begin(), permutation.end());
    vector<vector<int>> ans;
    helper(permutation,ans,0);
    return ans;
}
int main()
{
    int size,number;
    cout<<"Enter the size: ";
    cin>>size;
    vector<int> perm;
    cout<<"Enter the values: ";
    for(int i=0;i<size;i++)
    {
        cin>>number;
        perm.push_back(number);
    }
    vector<vector<int>> res =permutationFunc(perm);
    //Printing the result.
    for(auto i: res)
    {
        for(auto j: i)
        {
            cout<<j<<" ";
        }
    cout<<endl;
    } 
}

// O(n!) -> Time complexity.