#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> ans;

void permutationFunc(vector<int>& permutation, int index)
{
    if(permutation.size() == index)
    {
        ans.push_back(permutation);
        return;
    }
    for(int i=index;i< permutation.size();i++)
    {
        swap(permutation[i], permutation[index]);
        permutationFunc(permutation, index +1);
        swap(permutation[i], permutation[index]);
    }
    return;
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
    // permutationFunc(perm,0);


    //Using inbuild functions
    sort(perm.begin(), perm.end());
    do
    {
        ans.push_back(perm);
    }while(next_permutation(perm.begin(), perm.end()));

    //Printing the result.
    for(auto i: ans)
    {
        for(auto j: i)
        {
            cout<<j<<" ";
        }
    cout<<endl;
    } 
}

// O(n!) -> Time complexity.