#include<bits/stdc++.h>
using namespace std;

int descPrint(int number)
{
    if(number==1)
    { 
        return 1;
    }
    else
    {
        cout<<number<<" ";
        return descPrint(number-1);
   }
}
int main()
{
    int number;
    cout<<"Enter the size: ";
    cin>>number;
    int numbers= descPrint(number);
    cout<<numbers<<" ";
    return 0;
}