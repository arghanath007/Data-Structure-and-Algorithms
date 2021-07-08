#include<bits/stdc++.h>

using namespace std;

void ascPrint(int number)
{
    if(number==1)
    { 
        cout<<1<<" ";
        return;
    }
    else
    {
        ascPrint(number-1);
        cout<<number<<" "; 
    }
}

int main()
{
    int number;
    cout<<"Enter the size: ";
    cin>>number;
    ascPrint(number);
    return 0;
}