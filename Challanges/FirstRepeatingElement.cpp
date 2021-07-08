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

void FirstRepeatingElement(vector<int>& numbers, int limit)
{
    vector<int> index;
    vector<int>::iterator it;
    const int N=1e6 +2;
    int minIndex=INT_MAX,value;
    for(int i=0;i< N;i++)
    {
        index.push_back(-1);
    }
    // Display(index, index.size());
    for(int i=0;i< limit;i++)
    {
        value=numbers[i];
        if(index[value] == -1)
        {
            index[value]=i;
        }
        else
        {
            minIndex= min(minIndex,index[value]);
        }
    }
    if(minIndex == INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<minIndex + 1<<endl;
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
    FirstRepeatingElement(numbers, limit);
    // Display(numbers, limit);
    return 0;
}