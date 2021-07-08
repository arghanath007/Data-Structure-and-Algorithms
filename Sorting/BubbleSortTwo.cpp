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
    int counter=0;
    while (counter < limit-1)
    {
        for(int i=0; i< limit-counter-1;i++)
        {
            if(numbers[i] > numbers[i+1])
            {
                int temp= numbers[i];
                numbers[i]=numbers[i+1];
                numbers[i+1]=temp;
    
            }
        }
        counter++;
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