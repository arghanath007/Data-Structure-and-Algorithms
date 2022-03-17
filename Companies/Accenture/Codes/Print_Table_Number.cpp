#include<bits/stdc++.h>

using namespace std;


void PrintNumberTableSum(int n)
{
    int table[20];
    int sum = 0,number;
    for (int i = 1; i <= 10;i++)
    {
        number= n*i;
        table[i-1] = number;
        sum += number;
    }
    cout << "The Expected Result Value: \n";
    for (int i = 0; i < 10;i++)
    {
        cout << table[i] << ", ";
    }
    cout<<"\n"<<sum<<endl;
}


int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    PrintNumberTableSum(n);
}