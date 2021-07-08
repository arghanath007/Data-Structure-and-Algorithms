#include<bits/stdc++.h>

using namespace std;

int guess(int number)
{
    int pick= rand() % number;
    if(pick < number)
    {
        return -1;
    }
    else if(pick > number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int guessNumber(int n) 
{
    int maxNo= n, minNo=1;
    //Binary Search.
    while (true)
    {
        int mid=(maxNo - minNo)/2 + minNo; 
        int result= guess(mid);
        if(result == 0)
        {
            return mid;
        }
        else if(result == 1)
        {
            minNo=mid +1;
        }
        else
        {
            maxNo= mid-1;
        }
    }
}

int main()
{
    int range,pick,guess;
    cout<<"Enter the range: ";
    cin>>range;
    guessNumber(range);
}

// int mid=(maxNo - minNo)/2 + minNo; -> (minNo + maxNo)/2; these are same mathematically but different when the value of 'mid' exceeds the integer limit of 2^31 -1 then the overflow number converts to a negative number and diving it will still give a negative number. So '(minNo + maxNo)/2' will give a TLE or Time Limit Exceed error whereas '(maxNo - minNo)/2 + minNo' will not as the sum is not getting converted into a negative number 