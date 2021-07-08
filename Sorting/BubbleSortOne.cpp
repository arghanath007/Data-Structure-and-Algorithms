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

void BubbleSort(vector<int>& numbers, int limit)
{
    for(int i=0;i< limit-1;i++)
    {
        for(int j=0;j<limit-i-1;j++)
        {
            if(numbers[j] > numbers[j+1])
            {
                int temp= numbers[j+1];
                numbers[j+1]= numbers[j];
                numbers[j]=temp;
            }
        }
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
    BubbleSort(numbers, limit);
    cout<<"\nAfter Sorting:\n";
    Display(numbers,limit);
    return 0;
}