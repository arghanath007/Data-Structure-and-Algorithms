#include<bits/stdc++.h>

using namespace std;

void PrimeFactor(int number)
{
    // int* spf=new int[size];
    // for(int i=0;i<=size;i++)
    // {
    //     spf[i]=0;
    // }
    int spf[number]={0};
    for(int i=2;i<=number;i++) // SPF -> Smallest Prime Factor. The spf of a prime no. will be itself only. Example spf[2]=2, spf[3]=3.
    {
        spf[i]=i;
    }
    for(int i=2;i*i<=number;i++) // We are checking if a number is uninialized. if(spf[i] == i) is true which means that we haven't marked that number yet.
    {
        if(spf[i] == i)
        {
            for(int j=i*i;j<=number;j+=i)
            {
                if(spf[j] ==j) // Checking if it is unmarked. If it is already marked with some element then the spf of that elements is not this current value of 'i', it is the previous value of 'i' that we have marked in the spf.
                {
                    spf[j]=i;
                }                
            }
        }
    }
    while(number!=1)
    {
        cout<<spf[number]<<" ";
        number/=spf[number];
    }
    //Dry Run check for number=10.
    // cout<<endl<<spf[1]<<" "<<spf[10]<<" "<<spf[5]<<endl;
}

int main()
{
    int size;
    cout<<"Enter the number: ";
    cin>>size;
    PrimeFactor(size);
}