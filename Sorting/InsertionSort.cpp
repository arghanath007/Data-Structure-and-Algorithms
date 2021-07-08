#include <bits/stdc++.h>  
using namespace std;

void Display(vector<int>& numbers, int limit)
{
    vector<int>::iterator i;
    for(i = numbers.begin(); i != numbers.end();i++)
    {
        cout<<*i<<" ";
    }
}

void InsertionSort(vector<int>& numbers, int limit)
{
    for(int i=1;i<limit;i++)
    {
        int current=numbers[i];
        int j=i-1;
        while(numbers[j] > current && j>=0)
        {
            numbers[j+1] = numbers[j];
            j--;
        }
        numbers[j+1]=current;
    }
    
}



int main()
{
    int limit,number;
    cout<<"Enter the size: ";
    cin>>limit;
    vector<int> numbers;
    for(size_t i=0;i< limit;i++)
    {
        cin>>number;
        numbers.push_back(number);
    }
    cout<<"\nBefore Sorting:\n";
    Display(numbers,limit);
    InsertionSort(numbers, limit);
    cout<<"\nAfter Sorting:\n";
    Display(numbers,limit);
    return 0;
}