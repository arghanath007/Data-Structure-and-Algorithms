#include<bits/stdc++.h>

using namespace std;

int divisibleBy5(int range)
{
    int count=0;
    for(int i=1;i<=range;i++)
    {
        if(i % 5 == 0)
        {
            count++;
        }
    }
    return count;
}

int divisibleBy7(int range)
{
    int count=0;
    for(int i=1;i<=range;i++)
    {
        if(i % 7 == 0)
        {
            count++;
        }
    }
    return count;
}
int divisibleByBoth5And7(int range)
{
    int count=0;
    for(int i=1;i<=range;i++)
    {
        if(i % 5 == 0 && i % 7 ==0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int number;
    cout<<"Enter the range: ";
    cin>>number;
    int fiveCount=divisibleBy5(number);
    int sevenCount=divisibleBy7(number);
    int BothCount=divisibleByBoth5And7(number);
    int result= (fiveCount + sevenCount) - BothCount;
    cout<<"The count is: "<<result<<endl;
}