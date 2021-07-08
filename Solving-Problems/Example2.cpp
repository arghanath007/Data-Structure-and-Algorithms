// This is a better or optimized solution to the Example1 problem.

#include<iostream>
#include<vector>

using namespace std;

bool containsCommonItem(vector<char> array1, vector<char> array2)
{
    // loop through first array and create object where properties === items in the array

    //This is done in JS.

    // let map = {};
    // for (let i=0; i < arr1.length; i++) 
    // {
        //  if(!map[arr1[i]]) 
            // {
                // const item = arr1[i];
                // map[item] = true;
            // }
    // }


     // loop through second array and check if item in second array exists on created object. 

    // for (let j=0; j < arr2.length; j++) 
    // {
    //     if (map[arr2[j]]) 
    //     {
    //         return true;
    //     }
    // }
    // return false
}

int main()
{
    vector<char> array1={'a','b','c','x'};
    vector<char> array2={'z','c','i'};

    cout<<containsCommonItem(array1,array2);

    return 0;
}

//O(a + b) Time Complexity. Since the loops are one after another and not nested within one another.
//O(a) Space Complexity . Sice we are creating an object 'map' of size same as that of the length of the 1st array.