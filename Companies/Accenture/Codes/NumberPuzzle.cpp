#include<bits/stdc++.h>

using namespace std;



int NumberPuzzle(vector<int> numbers, int len)
{
    int temp;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1;j++)
        {
            if(numbers[j] > numbers[j+1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }
    // cout<<"\nAfter Sorting: ";
    // for (int i = 0; i < len; i++)
    // {
    //     cout<<numbers[i]<<" ";
    // }
    int sum = 0;
    for (int i = 1; i < len;i++)
    {
        sum += abs(numbers[i] - numbers[i - 1]);
    }
    return (sum ? sum : numbers[0]);
}

int main()
{
    int len;
    cout<<"Enter the length of the array: ";
    cin>>len;
    vector<int> numbers(len);
    cout<<"Enter the numbers: ";
    for(int i=0;i<len;i++)
    {
        cin>>numbers[i];
    }
    cout<<"The mimimum absolute difference is: "<<NumberPuzzle(numbers, len);
}