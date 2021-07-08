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

void MaxTill(vector<int>& numbers, int limit)
{
    cout<<"\nThe Max Till the limit is: \n";
    int max=numbers[0];
    // cout<<max;
    for(int i=0; i< limit; i++)
    {
        if(max < numbers[i])
        {
            max = numbers[i];   
        }
        cout<<max<<endl;
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
    MaxTill(numbers, limit);
    // Display(numbers, limit);
    return 0;
}