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

void LongestArithmeticSubArray(vector<int>& numbers, int limit)
{
    cout<<"\nThe Longest SubArray is: \n";
    int ans=2;
    int pd= numbers[1]- numbers[0];
    int j=2;
    int current=2;
    while(j<limit)
    {
        if(pd == (numbers[j]-numbers[j-1]))
        {
            current++;
        }
        else
        {
            pd= numbers[j]- numbers[j-1];
            current=2;
        }
        ans=max(ans,current);
        j++;
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
    LongestArithmeticSubArray(numbers, limit);
    // Display(numbers, limit);
    return 0;
}