#include<bits/stdc++.h>

using namespace std;


int Rats_House(int array[],int r, int unit,int len)
{
    if(len==0)
    {
        return -1;
    }
    int required_food,sum=0;
    required_food = r*unit;
    for (int i = 0; i < len;i++)
    {
        sum += array[i];
        if(sum>=required_food)
        {
            return i+1;
        }
        else
        {
            continue;
        }
    }
    return 0;
}
 
int main()
{
    int r,unit,n;
    cout << "Enter the length: ";
    cin >> n;
    int array[n];
    cout<<"Enter the array: ";
    for (int i = 0; i < n;i++)
    {
        cin >> array[i];
    }
    cout<<"Enter the r and unit values: ";
    cin >> r >> unit;
    int house=Rats_House(array,r,unit,n);
    if(house==-1)
    {
        cout<<"The array is empty"<<endl;
    }
    else if(house ==0)
    {
        cout<<"The total food is not sufficient"<<endl;
    }
    else
    {
        cout<<house<<endl;
    }
    return 0;
}