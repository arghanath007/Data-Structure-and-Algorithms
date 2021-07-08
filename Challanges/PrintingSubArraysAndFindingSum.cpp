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

int printingSubArraysAndFindingSum(vector<int>& numbers, int limit)
{
    // for(int i=0;i<limit;i++)
    // {
    //     for(int j=i;j<limit;j++)
    //     {
    //         if(i == j)
    //         {
    //             cout<<"("<<numbers[i]<<")";
    //         }
    //         else
    //         {
    //             cout<<"("<<numbers[i]<<" , "<<numbers[j]<<")";
    //         }
    //     }
    //     cout<<endl;
    // }
    int maxSum= INT_MIN;
    for(int i=0;i<limit;i++)
    {
        for(int j=i;j<limit;j++)
        {
            int sum=0;
            for(int k=i; k<=j;k++)
            {
                // cout<<numbers[k]<<" ";
                sum+=numbers[k];
            }
            maxSum=max(maxSum,sum);
            // cout<<endl;
        }
        
    }
    cout<<maxSum<<endl;
} 

void efficientApproachOrCummulitativeSumApproach(vector<int>& numbers, int limit)
{
    // vector<int> currentSum;
    // currentSum.reserve(limit +1);
    vector<int> currentSum(limit +1);
    currentSum[0]=0;
    for(int i=1;i<=limit +1;i++)
    {
        currentSum[i]= currentSum[i-1] + numbers[i-1];
    }

    int maxSum= INT_MIN;
    for(int i=1;i<= limit;i++)
    {
        int sum=0;
        maxSum=max(currentSum[i], maxSum);
        for(int j=1;j<=i;j++)
        {
            sum=currentSum[i] - currentSum[j-1];
            maxSum=max(sum, maxSum);
        }
    }
    cout<<endl<<maxSum<<endl;
    // int cumSum[limit +1];
    // cumSum[0]=0;
    // for(int i=1;i<= limit;i++)
    // {
    //     cumSum[i]=cumSum[i-1] + numbers[i-1];
    // }
    // int maxSum=INT_MIN;
    // for(int i=1;i<=limit;i++)
    // {
    //     int sum=0;
    //     maxSum=max(maxSum, cumSum[i]);
    //     for(int j=1;j<=i;j++)
    //     {
    //         sum= cumSum[i]- cumSum[j-1];
    //         maxSum=max(maxSum, sum);
    //     }
    // }
    // cout<<maxSum<<endl;
}

void kadaneAlgorithmForMaxSubArraySum(vector<int>& numbers, int limit)
{
    int currentSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<limit;i++)
    {
        currentSum += numbers[i];
        if(currentSum <0)
        {
            currentSum=0;
        }
        maxSum=max(currentSum, maxSum);
    }
    cout<<endl<<maxSum<<endl;
}

int main()
{
    int limit,number;
    cout<<"Enter the size: ";
    cin>>limit;
    // cout<<"Enter the sum to be found out: ";
    // int sum;
    // cin>>sum;
    vector<int> numbers;
    cout<<"Enter the elements: ";
    for(int i=0;i< limit;i++)
    {
        cin>>number;
        numbers.push_back(number);
    }
    // Display(numbers, limit);
    // int garbage=printingSubArraysAndFindingSum(numbers, limit); // O(n^3) -> Time , O(1) -> Space
    // efficientApproachOrCummulitativeSumApproach(numbers, limit); // O(n^2) -> Time, O(n) -> Space
    kadaneAlgorithmForMaxSubArraySum(numbers, limit); //O(n) -> Time, O(1) -> Space
    // Display(numbers, limit);
    return 0;
}