// Given 2 arrays, create a function that let's a user know (true/false) whether these two arrays contain any common items
//For Example:
//const array1 = ['a', 'b', 'c', 'x'];//const array2 = ['z', 'y', 'i'];
//should return false.
//-----------
//const array1 = ['a', 'b', 'c', 'x'];//const array2 = ['z', 'y', 'x'];
//should return true.

// 2 parameters - arrays - no size limit
// return true or false

#include <iostream>
#include <vector>

using namespace std;

bool containsCommonItem(vector<char>array1,vector<char>array2)
{
    for(int i=0;i<array1.size();i++)
    {
        for(int j=0;j< array2.size();j++)
        {
            if(array1[i] == array2[j])
            {
                return true;
            }
        }
    }
    return false;
}


int main()
{
    vector<char> array1={'a','b','c','x'};
    vector<char> array2={'z','c','i'};

    cout<<containsCommonItem(array1,array2);

    return 0;
}

//This is the brute force or naive solution of the problem.
//The Big-O of the function is O(n^2) as there are two for loops nested in one another. But the length of the two arrays are different so the actual Big-O of the function is O(a * b). 'a' is the lenght of the 1st array and 'b' is the length of the 2nd array. As we have only used a new variable or a data structure to store anything so the space complexity of the function is Big-O of O(1).