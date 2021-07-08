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

int smallestPositiveMissingNumber(vector<int>& numbers, int limit)
{
    vector<bool> check;
    const int N=1e6 +2;
    int value;
    for(int i=0;i<N;i++)    
    {
        check.push_back(false);
    }
    for(int i=0;i< limit;i++)
    {
        if(numbers[i] >=0)
        {
            value= numbers[i];
            check[value]=true;
        }
    }
    int ans=-1;
    for(int i=1;i<N;i++)
    {
        if(check[i] == false)
        {
            ans=i;
            break;
        }
    }
    if(ans == -1)
    {
        cout<<"No Element Missing: ";
    }
    else
    {
        cout<<ans<<endl;
    }
    return 0;
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
    Display(numbers, limit);
    int garbage=smallestPositiveMissingNumber(numbers, limit);
    // Display(numbers, limit);
    return 0;
}