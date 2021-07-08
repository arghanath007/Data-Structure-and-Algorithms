//Better or efficient algorithm/solution of the Example3 problem.

#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

bool hasPairWithSum(const vector<int>& data, int sum)
{
    unordered_set<int> complements;
    for(int value: data)
    {
        if(complements.find(value)!= complements.end())
        {
            return true;
        }
        complements.insert(sum - value);
    }
    return false;
}

int main()
{
    // vector<int> array={1,2,4,4}; // returns 1;
    // vector<int> array={1,2,5,3}; // returns 1;
    // vector<int> array={2,9,3,1}; // returns 0;
    vector<int> array={2,9,3,6}; // returns 1;
    int sum=8;
    cout<<hasPairWithSum(array,sum);
}

//The Big-O of the above function is O(n) in terms of time complexity as there is only 1 for loop. 
//The Big-O of the above function is O(n) in terms of space complexity as there is only 1 data structure we used here that is the 'unordered_set'. 