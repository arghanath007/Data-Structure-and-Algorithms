#include <bits/stdc++.h>
using namespace std;

//Thing to remember Max subArray sum= Total sum of Array - Sum of non-contributing elements.

void Display(vector<int>& numbers, int limit)
{
    vector<int>::iterator i;
    for(i = numbers.begin(); i != numbers.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
}

int kidaneAlgorithm(vector<int> numbers, int limit)
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
        maxSum= max(maxSum, currentSum);
    }
    return maxSum;
}


void SumOfMaxCircularSubArray(vector<int> numbers, int limit)
{
    int wrapSum;
    int noWrapSum;
    int totalSum=0;
    noWrapSum= kidaneAlgorithm(numbers, limit);
    for(int i=0;i< limit;i++)
    {
        totalSum+= numbers[i];
        numbers[i]= - numbers[i];
    }
    // totalSum - - (minus and minux becomes positive). The array which is sent here is the array who's signs(plus(+) became minus(-) and Vice-versa) of the numbers are reversed. From this 'kidaneAlgorithm(numbers, limit)' we will be getting the sum of the non-contributing elements and we will be substracting the sum of the non-contributing elements from the total sum and negative-negative(- -) means positive or sum.
    wrapSum= totalSum + kidaneAlgorithm(numbers, limit);
    cout<<max(wrapSum, noWrapSum);
}

int main()
{
    int limit,number;
    cout<<"Enter the size: ";
    cin>>limit;
    vector<int> numbers;
    cout<<"Enter the elements: ";
    for(int i=0;i< limit;i++)
    {
        cin>>number;
        numbers.push_back(number);
    }
    Display(numbers, limit);
    SumOfMaxCircularSubArray(numbers, limit);
    // Display(numbers, limit);
    return 0;
}

//Example:   Input -> 4 -4 6 -6 10 -11 12 
//           Result->22