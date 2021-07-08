//Better or efficient algorithm/solution of the Example3 problem.

#include<iostream>
#include<vector>

using namespace std;

bool hasPairWithSum(const vector<int>& data, int sum)
{
    int low=0;
    int high= data.size()-1;
    int sumOfValues;
    while(low < high)
    {
        sumOfValues=data[low] + data[high];
        if(sumOfValues == sum)
        {
            return true;
        }
        else if(sumOfValues > sum)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}


int main()
{
    vector<int> array={1,2,4,4}; // returns 1;
    // vector<int> array={1,2,5,3}; // returns 1;
    // vector<int> array={1,2,3,9}; // returns 0;
    int sum=8;
    cout<<hasPairWithSum(array,sum);
}

//The Big-O of the above function would be O(n) in terms of time complexity as there is only one while loop in the function. 
//The Big-O of the above function would be O(1) in terms of Space complexity as there is only one while loop in the function. 