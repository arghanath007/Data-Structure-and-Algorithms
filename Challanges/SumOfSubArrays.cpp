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

void SumOfSubArrays(vector<int>& numbers, int limit)
{
    cout<<"\nThe sum of the SubArrays is: \n";
    int sum=0;
    for(int i=0; i< limit; i++)
    {
        sum=0;
        for(int j=i;j< limit;j++)
        {
            sum+=numbers[j];
            cout<<sum<<endl;
        }
        // cout<<sum<<endl;
    }
    
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
    SumOfSubArrays(numbers, limit);
    // Display(numbers, limit);
    return 0;
}