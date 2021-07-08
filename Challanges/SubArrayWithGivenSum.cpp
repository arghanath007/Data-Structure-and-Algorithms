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

int SubArrayWithGivenSum(vector<int>& numbers, int limit, int s)
{
    //Also Called as Two Pointer Approach.
    int i=0,j=0,start, end;
    start=end=-1;
    int sum= 0;
    while(j<limit & sum + numbers[j] <= s)
    {
        sum+= numbers[j];
        j++;
    }
    if(sum == s)
    {
        cout<< i+1<<" "<< j << endl;
        return 0;
    }
    while(j<limit)
    {
        sum += numbers[j];
        while(sum > s)
        {
            sum-=numbers[i];
            i++;
        }
        if(sum == s)
        {
            start =i+1;
            end= j+1;
            break;
        }
        j++;
    }
    if(start == -1 and end == -1)
    {
        cout<<"No Match Found";
    }
    else
    {
        cout<<start<<" "<< end<<endl;
    }

    return 0;
} 

int main()
{
    int limit,number;
    cout<<"Enter the size: ";
    cin>>limit;
    cout<<"Enter the sum to be found out: ";
    int sum;
    cin>>sum;
    vector<int> numbers;
    cout<<"Enter the elements: ";
    for(int i=0;i< limit;i++)
    {
        cin>>number;
        numbers.push_back(number);
    }
    Display(numbers, limit);
    int garbage=SubArrayWithGivenSum(numbers, limit,sum);
    // Display(numbers, limit);
    return 0;
}