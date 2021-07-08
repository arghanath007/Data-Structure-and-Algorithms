#include <bits/stdc++.h>
using namespace std;

void Display(vector<int>& numbers, int limit)
{
    vector<int>::iterator i;
    for(i = numbers.begin(); i != numbers.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
}


bool pairSumProblem(vector<int>& numbers, int limit, int k)
{
    for(int i=0;i<limit-1;i++)
    {
        for(int j=i+1;j<limit;j++)
        {
            if(numbers[i] + numbers[j] == k)
            {
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}

bool efficientPairSumProblem(vector<int>& numbers, int limit, int k)
{
    int low=0, high=limit-1;
    while(low< high)
    {
        if(numbers[low] + numbers[high] == k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(numbers[low] + numbers[high] < k)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    return false;
}

int main()
{
    int limit,number,k;
    cout<<"Enter the size: ";
    cin>>limit;
    vector<int> numbers;
    cout<<"Enter the sum to be found: ";
    cin>>k;
    cout<<"Enter the elements: ";
    for(int i=0;i< limit;i++)
    {
        cin>>number;
        numbers.push_back(number);
    }
    Display(numbers, limit);
    bool result;
    // result=pairSumProblem(numbers, limit, k); //O(n^2) -> Time
    result= efficientPairSumProblem(numbers, limit, k); // O(n) -> Time
    if(result)
    {
        cout<<"Element Found:";
    }
    else
    {
        cout<<"Element not Found:";
    }
    // Display(numbers, limit);
    return 0;
}

//The Array is in sorted order and it has a significance. If the array is not in sorted order then we are going to sort the array first. If the array is sorted then we do the efficient Approach.