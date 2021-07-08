// Question Link https://www.youtube.com/watch?v=XKu_SEDAykw

#include<iostream>
#include<vector>

using namespace std;

bool hasPairWithSum(const vector<int>& data, int sum)
{
    int length= data.size();
    for(int i=0;i< length -1;i++)
    {
        for(int j=i+1; j< length; j++)
        {
            if(data[i] +  data[j] == sum)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    // vector<int> array={1,2,4,4}; // returns 1;
    vector<int> array={1,2,3,9}; // returns 0;
    int sum=8;
    cout<<hasPairWithSum(array,sum);
}

//This is a naive or brute force algorithm which has a Big-O of O(n^2) since there are 2 for loops that are nested within one another.