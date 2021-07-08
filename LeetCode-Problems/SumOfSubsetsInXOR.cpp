#include<bits/stdc++.h>

using namespace std;

// https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/

int AllSubsets(vector<int>& subSets)
{
    int result=0;
    for(int i=0;i< (1<<subSets.size());i++) //Left-shift operator
    {
        int total=0;
        vector<int> subSet(0);
        for(int j=0;j< subSets.size();j++)
        {
            if((i & (1<<j)) !=0) //Bitwise AND(&).
            {
                total^=subSets[j]; //Bitwise XOR(^).
            }
        }
        result+= total;
    }
    return result;
}

int subsetXORSum(vector<int>& nums) 
{
    if(nums.empty())
    {
        return 0;
    }
    int result=AllSubsets(nums);
    return result;
}

//Few Liner.

// int subsetXORSum(vector<int>& subSets) 
// {
//     int sum=0;
//     for(int n:subSets)
//         sum|=n;                  // "|" -> Bitwise OR.
//     return sum*pow(2,subSets.size()-1);
// }

//All in One Function 

// int subsetXORSum(vector<int>& subSets) 
// {
//     if(subSets.empty())
//     {
//         return 0;
//     }
//     int result;
//     for(int i=0;i< (1<<subSets.size());i++)
//     {
//         int total=0;
//         vector<int> subSet(0);
//         for(int j=0;j< subSets.size();j++)
//         {
//             if((i & (1<<j)) !=0)
//             {
//                 total^=subSets[j];
//             }
//         }
//         result+= total;
//     }
//     return result;
// }

int main()
{
    vector<int> numbers;
    int size,number;
    cout<<"Enter the size: ";
    cin>>size;
    cout<<"Enter the elements: ";
    for(int i=0;i< size;i++)
    {
        cin>>number;
        numbers.push_back(number);
    }
    cout<<subsetXORSum(numbers)<<endl;
}

// Time Complexity is -> O(n * 2^n).