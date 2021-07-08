#include<bits/stdc++.h>

using namespace std;

int NumberOfOnes(int number)
{
    int count=0;
    while(number)
    {
        number=number & number-1;
        count++;
    }
    return count;
}

int main()
{
    int number;
    cout<<"Enter the number to check: ";
    cin>>number;
    cout<<NumberOfOnes(number)<<endl;
    return 0;
}
 

