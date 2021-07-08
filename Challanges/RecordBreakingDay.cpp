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

void BreakingRecord(vector<int>& numbers, int limit)
{
    if(limit == 1)
    {
        cout<<"1"<<endl;
        return;
    }
    int ans=0;
    int mx=-1;
    for(int i=0;i<limit;i++)
    {
        if(numbers[i] > mx && numbers[i] > numbers[i+1])
        {
            ans++;
        }
        mx=max(mx,numbers[i]);
    }
    cout<<ans<<endl;
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
    BreakingRecord(numbers, limit);
    // Display(numbers, limit);
    return 0;
}